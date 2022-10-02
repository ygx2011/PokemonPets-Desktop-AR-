﻿using System;
using System.Collections.Generic;

namespace P3DS2U.Editor.SPICA
{
    internal static class PatriciaTree
    {
        private const string DuplicateKeysEx = "Tree shouldn't contain duplicate keys!";

        public static void Insert<T> (List<T> Nodes, T Value, int MaxLength) where T : IPatriciaTreeNode
        {
            var Bit = (uint) ((MaxLength << 3) - 1);

            var Index = Traverse (Value.Name, Nodes, out var Root);

            while (GetBit (Nodes[Index].Name, Bit) == GetBit (Value.Name, Bit))
                if (--Bit == uint.MaxValue)
                    throw new InvalidOperationException (DuplicateKeysEx);

            Value.ReferenceBit = Bit;

            if (GetBit (Value.Name, Bit)) {
                Value.LeftNodeIndex = (ushort) Traverse (Value.Name, Nodes, out Root, Bit);
                Value.RightNodeIndex = (ushort) Nodes.Count;
            } else {
                Value.LeftNodeIndex = (ushort) Nodes.Count;
                Value.RightNodeIndex = (ushort) Traverse (Value.Name, Nodes, out Root, Bit);
            }

            var RootIndex = Nodes.IndexOf (Root);

            if (GetBit (Value.Name, Root.ReferenceBit))
                Root.RightNodeIndex = (ushort) Nodes.Count;
            else
                Root.LeftNodeIndex = (ushort) Nodes.Count;

            Nodes.Add (Value);

            Nodes[RootIndex] = Root;
        }

        public static int Traverse<T> (string Name, List<T> Nodes, out T Root, uint Bit = 0) where T : IPatriciaTreeNode
        {
            Root = Nodes[0];

            int Output = Root.LeftNodeIndex;

            var Left = Nodes[Output];

            while (Root.ReferenceBit > Left.ReferenceBit && Left.ReferenceBit > Bit) {
                if (GetBit (Name, Left.ReferenceBit))
                    Output = Left.RightNodeIndex;
                else
                    Output = Left.LeftNodeIndex;

                Root = Left;
                Left = Nodes[Output];
            }

            return Output;
        }

        private static bool GetBit (string Name, uint Bit)
        {
            var Position = (int) (Bit >> 3);
            var CharBit = (int) (Bit & 7);

            if (Name != null && Position < Name.Length)
                return ((Name[Position] >> CharBit) & 1) != 0;
            return false;
        }
    }
}
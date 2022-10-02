﻿using System.IO;
using System.Numerics;
using P3DS2U.Editor.SPICA.Math3D;

namespace P3DS2U.Editor.SPICA.GFL2.Model
{
    public struct GFBone
    {
        public string Name;
        public string Parent;
        public byte Flags;

        public Vector3 Scale;
        public Vector3 Rotation;
        public Vector3 Translation;

        public GFBone (BinaryReader Reader)
        {
            Name = Reader.ReadByteLengthString ();
            Parent = Reader.ReadByteLengthString ();
            Flags = Reader.ReadByte ();

            Scale = Reader.ReadVector3 ();
            Rotation = Reader.ReadVector3 ();
            Translation = Reader.ReadVector3 ();
        }

        public void Write (BinaryWriter Writer)
        {
            Writer.Write (Name);
            Writer.Write (Parent);
            Writer.Write (Flags);

            Writer.Write (Scale);
            Writer.Write (Rotation);
            Writer.Write (Translation);
        }
    }
}
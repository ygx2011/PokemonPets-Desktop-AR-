﻿using System;

namespace P3DS2U.Editor.SPICA.H3D.Camera
{
    [Flags]
    public enum H3DCameraFlags : byte
    {
        IsInheritingTargetRotation    = 1 << 0,
        IsInheritingTargetTranslation = 1 << 1,
        IsInheritingUpRotation        = 1 << 2
    }
}
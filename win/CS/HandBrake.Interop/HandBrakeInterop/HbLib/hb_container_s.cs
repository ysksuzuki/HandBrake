﻿// --------------------------------------------------------------------------------------------------------------------
// <copyright file="hb_container_s.cs" company="HandBrake Project (http://handbrake.fr)">
//   This file is part of the HandBrake source code - It may be used under the terms of the GNU General Public License.
// </copyright>
// <auto-generated>Disable Stylecop Warnings for this file</auto-generated>
// --------------------------------------------------------------------------------------------------------------------

namespace HandBrake.Interop.HbLib
{
	using System.Runtime.InteropServices;

	[StructLayout(LayoutKind.Sequential)]
	public struct hb_container_s
	{
		[MarshalAs(UnmanagedType.LPStr)]
		public string name;

		[MarshalAs(UnmanagedType.LPStr)]
		public string short_name;

		[MarshalAs(UnmanagedType.LPStr)]
		public string default_extension;

		public int format;
	}
}

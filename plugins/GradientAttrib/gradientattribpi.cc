/*Copyright (C) 2015 Wayne Mogg All rights reserved.

This file may be used either under the terms of:

1. The GNU General Public License version 3 or higher, as published by
the Free Software Foundation, or

This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
*/
/*+
________________________________________________________________________

 Author:        Wayne Mogg
 Date:          November 2015
 ________________________________________________________________________

-*/

#include "gradientattrib.h"
#include "odplugin.h"
#include "gradientattribmod.h"



mDefODPluginEarlyLoad(GradientAttrib)

mDefODPluginInfo(GradientAttrib)
{
	mDefineStaticLocalObject( PluginInfo, retpi,(
		"Gradient Attribute (base)",
		"Gradient Attribute (base)",
		"Wayne Mogg",
		"6.0",
    	"Inline, crossline and Z gradients for OpendTect v5+",
		PluginInfo::GPL ) );
    return &retpi;
}


mDefODInitPlugin(GradientAttrib)
{
    Attrib::GradientAttrib::initClass();
    return 0;
}


/*Copyright (C) 2015 Wayne Mogg. All rights reserved.

This file may be used either under the terms of:

1. The GNU General Public License version 3 or higher, as published by
the Free Software Foundation, or

This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
*/

#ifndef uigradientattrib_h
#define uigradientattrib_h

/*+
________________________________________________________________________

 Author:        Wayne Mogg
 Date:          November 2015
 ________________________________________________________________________

-*/

#include "uigradientattribmod.h"
#include "uiattrdesced.h"

class uiAttrSel;
class uiGenInput;



/*! \brief Compute Inline,Crossline or Z Gradient description editor */

class uiGradientAttrib : public uiAttrDescEd
{ mODTextTranslationClass(uiGradientAttrib);
public:

			uiGradientAttrib(uiParent*,bool);

protected:

    uiAttrSel*		inpfld_;
    uiGenInput*		operatorfld_;
    uiGenInput*		outfld_;

    bool		setParameters(const Attrib::Desc&);
    bool		setInput(const Attrib::Desc&);
    bool		getParameters(Attrib::Desc&);
    bool		getInput(Attrib::Desc&);

    			mDeclReqAttribUIFns
};


#endif



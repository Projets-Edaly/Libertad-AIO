#define Xcoef (0.001)
#define Ycoef (0.004)
#define LynxXcoef (0.003)
#define LynxYcoef (0.008)

class cfgRecoils
{
	#include "cfgRecoilsLegacy.hpp"

	class Default;

	//	muzzleOuter[]	= x,y,a,b = { horizontal axis, vertical axis, horizontal magnitude, vertical magnitude }; plot: ((p+x)/a)^2 + ((q+y)/b)^2 = 1;
	//	muzzleInner[]	= x,y,a,b = { horizontal axis, vertical axis, horizontal magnitude, vertical magnitude }; plot: ((p+x)/a)^2 + ((q+y)/b)^2 = 1;
	//	kickBack[]		= min&max = { minimum, maximum };

	/*---------------------------------------------------------------------------
		Default recoil configuration
	---------------------------------------------------------------------------*/
	class recoil_default: Default
	{					//	x_		y|		a>		b^
		muzzleOuter[]	= { 0.3,	1.0,	0.3,	0.2 };
		muzzleInner[]	= { 0,		0,		0.1,	0.1	};
		kickBack[]		= { 0.03,	0.06 };
		permanent		= 0.1;
		temporary		= 0.01;
	};

	/*---------------------------------------------------------------------------
		Adjustments from the default recoil configuration
	---------------------------------------------------------------------------*/
	class recoil_Test_rifle_01: recoil_default
	{
		muzzleOuter[]	= { 0.3,	1.0,	0.4,	0.3 };
		kickBack[]		= { 0.02,	0.04 };
		temporary		= 0.01;
	};
};

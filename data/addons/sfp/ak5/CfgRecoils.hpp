#define Xcoef (0.001)
#define Ycoef (0.004)
#define LynxXcoef (0.003)
#define LynxYcoef (0.008)

class CfgRecoils 
{
	class recoil_sfp_ak5
	{
		kickBack[] = {0.02,0.04};
		muzzleInner[] = {0,0,0.0,0.1,0.1};
		muzzleOuter[] = {0.3,0.8,0.4,0.3};
		permanent = 0.1;
		temporary = 0.01;
	};
		class recoil_sfp_ak5c
	{
		kickBack[] = {0.02,0.04};
		muzzleInner[] = {0,0,0.0,0.1,0.1};
		muzzleOuter[] = {0.3,1,0.4,0.3};
		permanent = 0.1;
		temporary = 0.01;
	};
		class recoil_sfp_ak5d
	{
		kickBack[] = {0.03,0.06};
		muzzleInner[] = {0,0,0.0,0.1,0.1};
		muzzleOuter[] = {0.3,1.2,0.4,0.3};
		permanent = 0.1;
		temporary = 0.015;
	};
	
	recoil_single_sfp_ak5[]=
	{
		0,0,0,
		0.03, 36.943*(Xcoef)*(0.3), 3.587*(Ycoef)*(3),
		0.03, 31.817*(Xcoef)*(0.5), 1.251*(Ycoef)*(3.4),
		0.03, 19.755*(Xcoef)*(0.7), 0.764*(Ycoef)*(3.8),
		0.06, 7.388*(Xcoef)*(0.9), 0.285*(Ycoef)*(4.2),
		0.06, -2.402*(Xcoef)*(0.3), -0.096*(Ycoef)*(7),
		0.06, -3.53*(Xcoef)*(0.5), -0.141*(Ycoef)*(5),
		0.06, -3.677*(Xcoef)*(0.5), -0.147*(Ycoef)*(3), 
		0.06, -3.138*(Xcoef)*(0.3), -0.125*(Ycoef)*(1),
		0.06, 0, 0
	};
	recoil_single_prone_sfp_ak5[]=
	{
		0,0,0,
		0.03, 36.943*(Xcoef)*(0.3), 3.587*(Ycoef)*(0.7), 
		0.03, 31.817*(Xcoef)*(0.5), 1.251*(Ycoef)*(1.1),
		0.03, 19.755*(Xcoef)*(0.7), 0.764*(Ycoef)*(1.5),
		0.06, 7.388*(Xcoef)*(0.9), 0.285*(Ycoef)*(1.9),
		0.06, -2.402*(Xcoef)*(0.3), -0.096*(Ycoef)*(2),
		0.06, -3.53*(Xcoef)*(0.5), -0.141*(Ycoef)*(1),
		0.06, -3.677*(Xcoef)*(0.5), -0.147*(Ycoef)*(0.5),
		0.06, -3.138*(Xcoef)*(0.3), -0.125*(Ycoef)*(0.3), 
		0.06, 0, 0
	};
	recoil_auto_sfp_ak5[]=
	{
		0,0,0,
		0.06, 36.943*(Xcoef)*(1.2), 3.587*(Ycoef)*(1.7),
		0.06, 31.817*(Xcoef)*(1.5), 1.251*(Ycoef)*(2.1),
		0.06, 19.755*(Xcoef)*(1.7), 0.764*(Ycoef)*(2.4),
		0.06, 7.388*(Xcoef)*(1.9), 0.285*(Ycoef)*(2.8),
		0.03, -2.402*(Xcoef)*(0.3), -0.096*(Ycoef)*(7),
		0.03, -3.53*(Xcoef)*(0.5), -0.141*(Ycoef)*(5),
		0.03, -3.677*(Xcoef)*(0.5), -0.147*(Ycoef)*(3),
		0.06, 0, 0
	};
	recoil_auto_prone_sfp_ak5[]=
	{
		0,0,0,
		0.06, 36.943*(Xcoef)*(1.2), 3.587*(Ycoef)*(0.3),
		0.06, 31.817*(Xcoef)*(1.5), 1.251*(Ycoef)*(0.7), 
		0.06, 19.755*(Xcoef)*(1.7), 0.764*(Ycoef)*(1.1),
		0.06, 7.388*(Xcoef)*(1.9), 0.285*(Ycoef)*(1.5),
		0.03, -2.402*(Xcoef)*(0.3), -0.096*(Ycoef)*(4),
		0.03, -3.53*(Xcoef)*(0.5), -0.141*(Ycoef)*(2),
		0.03, -3.677*(Xcoef)*(0.5), -0.147*(Ycoef)*(1),
		0.06, 0, 0
	};
};
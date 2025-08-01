class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class sfp_30Rnd_556x45_Stanag : 30Rnd_556x45_Stanag
	{
		dlc = "sfp";
		author = "Swedish Forces Pack";
		scope = 2;
		displayName = "5.56mm 30Rnd Ball";
		displayNameShort = "5.56mm";
		descriptionShort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: AK5<br />Swedish: 5,56/5 STKPRJ";
		picture = "\sfp_ak5\ui\mag\mag_ca.paa";
		model = "\sfp_ak5\ui\mag\sfp_m_ak5.p3d";
		modelSpecial = "\sfp_ak5\magazines\sfp_stanag_metal_mag.p3d";
		modelSpecialIsProxy = 1;
		ammo = "sfp_556x45_ball";
		lastRoundsTracer = 0;
		tracersEvery = 0;
	};
	class sfp_30Rnd_556x45_Stanag_plastic : sfp_30Rnd_556x45_Stanag
	{
		displayName = "5.56mm 30Rnd Ball (Plastic)";
		model = "\sfp_ak5\ui\mag\sfp_m_ak5_plastic.p3d";
		modelSpecial = "\sfp_ak5\magazines\sfp_stanag_plastic_mag.p3d";
		picture = "\sfp_ak5\ui\mag\plasticmag_ca.paa";
	};
// Tracer
	class sfp_30Rnd_556x45_Stanag_tracer : sfp_30Rnd_556x45_Stanag
	{
		tracersEvery = 3;
		displayName = "5.56mm 30Rnd Tracer";
		displayNameShort = "5.56mm Tracer";
		descriptionShort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: AK5<br />Swedish: 5,56/5 SLPRJ";
	};
	class sfp_30Rnd_556x45_Stanag_tracer_plastic : sfp_30Rnd_556x45_Stanag_tracer
	{
		displayName = "5.56mm 30Rnd Tracer (Plastic)";
		model = "\sfp_ak5\ui\mag\sfp_m_ak5_plastic.p3d";
		modelSpecial = "\sfp_ak5\magazines\sfp_stanag_plastic_mag.p3d";
		picture = "\sfp_ak5\ui\mag\plasticmag_ca.paa";
	};
// IR Tracer
	class sfp_30Rnd_556x45_Stanag_irtracer : sfp_30Rnd_556x45_Stanag
	{
		ammo = "sfp_556x45_irTracer";
		tracersEvery = 3;
		displayName = "5.56mm 30Rnd IR-Tracer";
		displayNameShort = "5.56mm IR-Tracer";
		descriptionShort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: AK5<br />Swedish: 5,56/5 IR-SLPRJ";
	};
	class sfp_30Rnd_556x45_Stanag_irtracer_plastic : sfp_30Rnd_556x45_Stanag_irtracer
	{
		displayName = "5.56mm 30Rnd IR-Tracer (Plastic)";
		model = "\sfp_ak5\ui\mag\sfp_m_ak5_plastic.p3d";
		modelSpecial = "\sfp_ak5\magazines\sfp_stanag_plastic_mag.p3d";
		picture = "\sfp_ak5\ui\mag\plasticmag_ca.paa";
	};
// AP  Inte med pga inte speciellt relevant pga samma penetration som vanlig 7,62, för att minska "spam" i magasinslistan
	// class sfp_30Rnd_556x45_Stanag_ap : sfp_30Rnd_556x45_Stanag
	// {
		// ammo = "sfp_556x45_ap";
		// initSpeed = 875;
		// displayName = "5.56mm 30Rnd AP";
		// displayNameShort = "5.56mm AP";
		// descriptionShort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: AK5<br />Swedish: 5,56/5 PPRJ";
	// };
	// class sfp_30Rnd_556x45_Stanag_ap_plastic : sfp_30Rnd_556x45_Stanag_ap
	// {
		// displayName = "5.56mm 30Rnd AP (Plastic)";
		// model = "\sfp_ak5\ui\mag\sfp_m_ak5_plastic.p3d";
		// modelSpecial = "\sfp_ak5\magazines\sfp_stanag_plastic_mag.p3d";
		// picture = "\sfp_ak5\ui\mag\plasticmag_ca.paa";
	// };
};

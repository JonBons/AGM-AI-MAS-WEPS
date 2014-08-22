class CfgPatches {
  class AGM_AI_MAS_WEPS {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.60;
    requiredAddons[] = {AGM_Core, mas_weapons_pack};
    version = "0.931";
    versionStr = "0.931";
    versionAr[] = {0,931,0};
    author[] = {"KoffeinFlummi", "commy2", "JonBons"};
    authorUrl = "https://github.com/KoffeinFlummi/";
  };
};

// weapon config changes, by JonBons

/* documentation:
aiDispersionCoefX = 1.0         Dispersion multiplier for AI units (axis X - left to right).
aiDispersionCoefY = 1.0         Dispersion multiplier for AI units (axis Y - top-down).
aiRateOfFire = 5.0              Delay between shots at given aiRateOfFireDistance.
aiRateOfFireDistance = 500      At shorter distance delay (aiRateOfFire) goes linearly to zero.
*/

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {

  // rifles
  class RifleCore;
  class Rifle: RifleCore {};
  class Rifle_Base_F: Rifle {};
  class Rifle_Long_Base_F: Rifle_Base_F {};
  class UGL_F;
  class arifle_MX_Base_F;
  class arifle_MX_F;
  class srifle_EBR_F;
  class optic_Hamr;
  class optic_Arco;
  class optic_Aco;
  class hgun_P07_F;
  class LMG_Mk200_F;
  class LMG_Zafir_F;
  class arifle_Katiba_F;
  class srifle_LRR_F;
  class srifle_GM6_F;

  class arifle_mas_ak_74m: arifle_Katiba_F
  {
    aiDispersionCoefY = 18.0;
    aiDispersionCoefX = 12.0;
    modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium","AGM_Burst_far"};
    class Single: Mode_SemiAuto {
      minRange = 120;       // 2;
      minRangeProbab = 0.7; // 0.5;
      midRange = 300;       // 200;
      midRangeProbab = 0.5; // 0.7;
    };
    class FullAuto;
    class fullauto_medium: FullAuto {
      minRange = 20;       // 2;
      burst = "3 + round random 5"; //3;
    };
    class AGM_Burst_far: fullauto_medium {
      aiRateOfFire = 2.0;
      aiRateOfFireDistance = 500;
      minRange = 400;
      minRangeProbab = 0.1;
      midRange = 500;
      midRangeProbab = 0.2;
      maxRange = 600;
      maxRangeProbab = 0.2;
      burst = "2 + round random 3";
    };
    class single_medium_optics1: Single {
      aiRateOfFireDistance = 700; // 600;
      minRange = 120;             // 2;
      maxRange = 700;             // 600;
    };
    class single_far_optics2: single_medium_optics1 {
      aiRateOfFireDistance = 900; // 800;
      minRange = 200;             // 100;
      maxRange = 900;             // 800;
    };
  };

  class arifle_Katiba_GL_F;
  class arifle_mas_ak_74m_gl: arifle_Katiba_GL_F {
    aiDispersionCoefY = 18.0;
    aiDispersionCoefX = 12.0;
    modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium","AGM_Burst_far"};
    class Single: Mode_SemiAuto {
      minRange = 120;       // 2;
      minRangeProbab = 0.7; // 0.5;
      midRange = 300;       // 200;
      midRangeProbab = 0.5; // 0.7;
    };
    class FullAuto;
    class fullauto_medium: FullAuto {
      minRange = 20;       // 2;
      burst = "3 + round random 5"; //3;
    };
    class AGM_Burst_far: fullauto_medium {
      aiRateOfFire = 2.0;
      aiRateOfFireDistance = 500;
      minRange = 400;
      minRangeProbab = 0.1;
      midRange = 500;
      midRangeProbab = 0.2;
      maxRange = 600;
      maxRangeProbab = 0.2;
      burst = "2 + round random 3";
    };
    class single_medium_optics1: Single {
      aiRateOfFireDistance = 700; // 600;
      minRange = 120;             // 2;
      maxRange = 700;             // 600;
    };
    class single_far_optics2: single_medium_optics1 {
      aiRateOfFireDistance = 900; // 800;
      minRange = 200;             // 100;
      maxRange = 900;             // 800;
    };
  };

  class arifle_mas_akms: arifle_mas_ak_74m {
    aiDispersionCoefY = 18.0;
    aiDispersionCoefX = 12.0;
    modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium","AGM_Burst_far"};
    class Single: Mode_SemiAuto {
      minRange = 120;       // 2;
      minRangeProbab = 0.7; // 0.5;
      midRange = 300;       // 200;
      midRangeProbab = 0.5; // 0.7;
    };
    class FullAuto;
    class fullauto_medium: FullAuto {
      minRange = 20;       // 2;
      burst = "3 + round random 5"; //3;
    };
    class AGM_Burst_far: fullauto_medium {
      aiRateOfFire = 2.0;
      aiRateOfFireDistance = 500;
      minRange = 400;
      minRangeProbab = 0.1;
      midRange = 500;
      midRangeProbab = 0.2;
      maxRange = 600;
      maxRangeProbab = 0.2;
      burst = "2 + round random 3";
    };
    class single_medium_optics1: Single {
      aiRateOfFireDistance = 700; // 600;
      minRange = 120;             // 2;
      maxRange = 700;             // 600;
    };
    class single_far_optics2: single_medium_optics1 {
      aiRateOfFireDistance = 900; // 800;
      minRange = 200;             // 100;
      maxRange = 900;             // 800;
    };
  };
};

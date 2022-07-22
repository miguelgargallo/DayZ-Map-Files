
class CfgPatches
{
	class Tasmania﻿
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Surfaces"};
		author="System32";
		
	};﻿
};
class CfgWorlds
{
	class CAWorld;
	class Tasmania: CAWorld
	{
		access=3;
		cutscenes[]={};
		description="Tasmania";
		icon="";
		worldName="Tasmania\Tasmania.wrp";
		oceanMaterial="{11D1156E1D9DADF0}Graphics/Materials/water/oceanold_samplemap.emat";
		oceanNiceMaterial="{11D1156E1D9DADF0}Graphics/Materials/water/oceanold_samplemap.emat";
		oceanStormMaterial="{11D1156E1D9DADF0}Graphics/Materials/water/oceanold_samplemap.emat";
		
		  class Navmesh
			 {
			 navmeshName="dz\Worlds\chernarusplus\navmesh\navmesh.nm";
			 filterIsolatedIslandsOnLoad = true;
			 visualiseOffset = 0.0;

			 class GenParams
			 {
				 tileWidth = 50.0;
				
				 cellSize1 = 0.25;
				 cellSize2 = 0.1;
				 cellSize3 = 0.1;
				
				 ﻿filterIsolatedIslands = true;
				 seedPosition[] = {7500, 0, 7500};
				
				 class Agent
				 {
					 diameter = 0.6;
					
					 standHeight = 1.5;
					 crouchHeight = 1.0;
					 proneHeight = 0.5;
					
					 maxStepHeight = 0.45;
					 maxSlope = 60.0;
				 };
				
				 class Links
				 {	
					 class ZedJump387_050
					 {
						 jumpLength = 1.50;
						 jumpHeight = 0.50;
						 minCenterHeight = 0.3;
						 jumpDropdownMin = 0.5;
						 jumpDropdownMax = -0.5;
						 areaType="jump0";
						 flags[] = {"jumpOver"};
						 color = 0x66ff0000;
					 };
					 ﻿class ZedJump388_050
					 {
						 jumpLength = 1.50;
						 jumpHeight = 0.50;
						 minCenterHeight = -0.5;
						 jumpDropdownMin = 0.5;
						 jumpDropdownMax = -0.5;
						 areaType="jump0";
						 flags[] = {"jumpOver"};
						 color = 0x66dd5500;
					 };
					 class ZedJump387_110
					 {
						 jumpLength = 3.90;
						 jumpHeight = 1.1;
						 minCenterHeight = 0.5;
						 jumpDropdownMin = 0.5;
						 jumpDropdownMax = -0.5;
						 areaType="jump0";
						 flags[] = {"jumpOver"};
						 color = 0x66008000;
					 };
					 class ZedJump420_160
					 {
						 jumpLength = 4.0;
						 jumpHeight = 1.6;
						 minCenterHeight = 1.1;
						 jumpDropdownMin = 0.5;
						 jumpDropdownMax = -0.5;
						 areaType="jump0";
						 flags[] = {"jumpOver"};
						 color = 0x660000ff;
					 };
					 class ZedJump265_210
					 {
						 jumpLength = 2.45;
						 jumpHeight = 2.5;
						 minCenterHeight = 1.8;
						 jumpDropdownMin = 0.5;
						 jumpDropdownMax = -0.5;
						 areaType="jump0";
						 flags[] = {"climb"};
						 color = 0x669400d3;
					 };
					 class Fence50_110deer
					 {
						 typeId = 100;
						 jumpLength = 8.0;
						 jumpHeight = 1.1;
						 minCenterHeight = 0.5;
						 jumpDropdownMin = 1.0;
						 ﻿jumpDropdownMax = -1.0;
						 areaType="jump2";
						 flags[] = {"jumpOver"};
						 color = 0x66aaaaFF;
					 };
					 class Fence110_160deer 
					 {
						 typeId = 101;
						 jumpLength = 8.0;
						 jumpHeight = 1.6;
						 minCenterHeight = 1.1;
						 jumpDropdownMin = 1.0;
						 jumpDropdownMax = -1.0;
						 ﻿areaType="jump3";
						 flags[] = {"jumpOver"};
						 color = 0x6624fff8;
					 };
					 class Fence50_110hen
					 {
						 typeId = 110;
						 jumpLength = 4.0;
						 jumpHeight = 1.1;
						 minCenterHeight = 0.5;
						 jumpDropdownMin = 0.5;
						 jumpDropdownMax = -0.5;
						 areaType="jump4";
						 flags[] = {"jumpOver"};
						 color = 0xFFFFAA00;
					 };
					 class Fence110_160hen
					 {
						 typeId = 111;
						 jumpLength = 4.0;
						 jumpHeight = 1.6;
						 minCenterHeight = 1.1;
						 jumpDropdownMin = 0.5;
						 jumpDropdownMax = -0.5;
						 areaType="jump4";
						 flags[] = {"jumpOver"};
						 color = 0xFFFFAA00;
					 };
				 };
			 };
		 };
		
		
		plateFormat="ML$ - #####";
		plateLetters="ABCDEGHIKLMNOPRSTVXZ";
		longitude=30;
		latitude=-56;
		
		class AISpawnerParams
		{
		};
		terrainNormalTexture = "Tasmania\data\utes_global_nohq.paa";
		
		class Names
		{
			class Settlement_Wynyard
				{
				name="Wynyard";
				position[]={8282.97,7187.21};
				type="Capital";
				radiusA=1571.16;
				radiusB=1018.12;
				angle=0.000;
			};
		};
		
		class OutsideTerrain
		{
			satellite="DZ\worlds\chernarusplus\data\outside_sat_co.paa";
			enableTerrainSynth= true;
			class Layers
			{
				class Layer0
				{
					nopx="DZ\surfaces\data\terrain\cp_gravel_nopx.paa";
					texture="DZ\surfaces\data\terrain\cp_gravel_ca.paa";
				};
			};
		};
		class Grid
		{
			offsetX = 0;
			offsetY = 0;
			class ﻿Zoom1
			﻿﻿{
				zoomMax = 0.15;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = 100;
			};
			class Zoom2
			{
				zoomMax = 0.85;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = 1000;
			};
			class Zoom3
			{
				zoomMax = 1e+30;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000;
				stepY = 10000;
			};
		};
		startTime="9:20";
		startDate="01/05/1975";
		centerPosition﻿[]={2500,2500,300};
		ilsPosition[]={2545,3000};
		ilsDirection[]={0,0.079999998,1};
		ilsTaxiIn[]={2495,2725,2495,2850,2508,2860,2508,3000,2520,3010,2545,3000};
		ilsTaxiOff[]={2545,2445,2520,2425,2495,2445,2495,2725};
		drawTaxiway=0;		
		class Sounds
		{
			sounds[]={};
		};
		class Animation
		{
			vehicles[]={};
		};
		clutterGrid=1.0; //1.11
		clutterDist=125; // 55
		noDetailDist=40;
		fullDetailDist=15;
		minTreesInForestSquare=10;
		minRocksInRockSquare=5;
		
		class Ambient
		{
		};
				
	};
};
class CfgWorldList{class Tasmania{};};
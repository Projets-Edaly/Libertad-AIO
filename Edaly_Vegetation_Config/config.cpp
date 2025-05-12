#include "\Edaly_Client\version.hpp"
class CfgPatches
{
	class Edaly_Vegetation_Config
	{
		author=$STR_EDALY_AUTHOR;
		url=$STR_EDALY_WEBSITE;
		requiredAddons[]={"Edaly_Client", "Edaly_Editor_Categories","Edaly_Vegetation","Edaly_Decals"};
		requiredVersion=ARMA3_VERSION;
		units[]={};
		weapons[]={};
	};
};

class CfgVehicles
{
	class Thing;
	class House_F;
	class Static;

	class t_tree_02_EL : Static {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Tree\Tropic_02\t_tree_02_EL.p3d";
		displayName = "Arbre des marais (grand)";
	};
	class t_tree_02_small_EL : t_tree_02_EL {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Tree\Tropic_02\t_tree_02_small_EL.p3d";
		displayName = "Arbre des marais (petit)";
	};
	class t_tree_02_verysmall_EL : t_tree_02_EL {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Tree\Tropic_02\t_tree_02_verysmall_EL.p3d";
		displayName = "Arbre des marais (très petit)";
	};
	class land_edaly_grass_01 : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\grass\c_Grass_leaf_big.p3d";
		displayName = "Herbe tropicale";
	};
	class land_edaly_grass_02 : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\grass\c_grass_01.p3d";
		displayName = "Herbe marais 1";
	};
	class land_edaly_grass_03 : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\grass\c_grass_02.p3d";
		displayName = "Herbe marais 2";
	};
	class land_edaly_grass_04 : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\grass\c_grass_03.p3d";
		displayName = "Herbe marais 3";
	};
	class land_edaly_grass_05 : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\grass\c_grass_04.p3d";
		displayName = "Herbe marais 4";
	};
	//class land_edaly_grass_06 : Thing {
	//	author=$STR_EDALY_AUTHOR;
	//	scope = 2;
	//	editorCategory = "EdCat_Edaly";
	//	editorSubcategory = "EdSubcat_Edaly_Vegetation";
	//	model = "Edaly_Vegetation\Clutter\grass\c_grass_05.p3d";
	//	displayName = "Herbe marais 5";
	//};
	class land_edaly_fern_01 : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\grass\c_fern_01.p3d";
		displayName = "fougere marais 1";
	};
	class land_edaly_BranchDry_01_EL : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\Tropic_Grass\BranchDry_01_EL.p3d";
		displayName = "BranchDry_01_EL";
	};
	class land_edaly_BushA_01_EL : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Bush\BushA_01_EL.p3d";
		displayName = "BushA_01";
	};
	class land_edaly_Grass_01_EL : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\Tropic_Grass\Grass_01_EL.p3d";
		displayName = "Grass_01_EL";
	};
	class land_edaly_Grass_02_EL : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\Tropic_Grass\Grass_02_EL.p3d";
		displayName = "Grass_02_EL";
	};
	class land_edaly_Grass_03_EL : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\Tropic_Grass\Grass_03_EL.p3d";
		displayName = "Grass_03_EL";
	};
	class land_edaly_Grass_04_EL : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\Tropic_Grass\Grass_04_EL.p3d";
		displayName = "Grass_04_EL";
	};
	class land_edaly_Grass_05_EL : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\Tropic_Grass\Grass_05_EL.p3d";
		displayName = "Grass_05_EL";
	};
	class land_edaly_GrassTall_01_EL : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\Tropic_Grass\GrassTall_01_EL.p3d";
		displayName = "GrassTall_01_EL";
	};
	class land_edaly_c_Grass_Leaves_coltsfoot : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\grass\c_Grass_Leaves_coltsfoot.p3d";
		displayName = "Herbe tropicale";
	};
	class land_edaly_c_Grass_mimosa : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\grass\c_Grass_mimosa.p3d";
		displayName = "Herbe tropicale";
	};
	class land_edaly_c_Grass_nettle : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\grass\c_Grass_nettle.p3d";
		displayName = "Herbe tropicale";
	};
	class land_edaly_c_Grass_short_bunch : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\grass\c_Grass_short_bunch.p3d";
		displayName = "Herbe tropicale";
	};
	class land_edaly_c_Grass_short_leaf : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\grass\c_Grass_short_leaf.p3d";
		displayName = "Herbe tropicale";
	};
	class land_edaly_c_Grass_short_mimosa : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\grass\c_Grass_short_mimosa.p3d";
		displayName = "Herbe tropicale";
	};
	class land_edaly_c_Grass_short_nettle : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\grass\c_Grass_short_nettle.p3d";
		displayName = "Herbe tropicale";
	};
	class land_edaly_c_Grass_short_small : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\grass\c_Grass_short_small.p3d";
		displayName = "Herbe tropicale";
	};
	class land_edaly_c_Grass_Tropic : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\grass\c_Grass_Tropic.p3d";
		displayName = "Herbe tropicale";
	};
	class land_edaly_c_GrassBunch_HI : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\grass\c_GrassBunch_HI.p3d";
		displayName = "Herbe tropicale";
	};
	class land_edaly_c_GrassBunch_LO : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Clutter\grass\c_GrassBunch_LO.p3d";
		displayName = "Herbe tropicale";
	};
	class Land_coffea_01_F : Thing {
		scope = 2;
	    author=$STR_EDALY_AUTHOR;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Coffea\coffea_01_F.p3d";
		displayName = "Coffea";
	};
	class land_edaly_flower_01 : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Amaryllis\c_flower_01.p3d";
		displayName = "Amaryllis";
	};
	class Land_Edaly_MossyRock_F : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\MossyRocks\MossyRock_F.p3d";
		displayName = "Mossy Rock";
	};
	class Land_Edaly_Rocky_Ground_Sulfur_EL : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Rocky_ground\rocky_ground_01_EL.p3d";
		displayName = "Sulfur Ground";
	};
	class Land_Edaly_Huge_Rock_Sulfur_EL : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\huge_rock\huge_rock_01_EL.p3d";
		displayName = "Sulfur Rock";
	};
	class Land_Edaly_BigMossyRock_F : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\MossyRocks\BigMossyRock.p3d";
		displayName = "Big Mossy Rock";
	};
	class Land_Edaly_CliffRock_01 : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\CliffRock\CliffRock_01_EL.p3d";
		displayName = "Cliff 01";
	};
	class Land_Edaly_CliffRock_02 : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\CliffRock\CliffRock_02_EL.p3d";
		displayName = "Cliff 02";
	};
	class Land_Edaly_mine_rubble_01 : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Mines\mine_rubble_01_EL.p3d";
		displayName = "Mine Rubble";
	};

	class Land_Edaly_mine_tunnel_01 : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Mines\mine_tunnel_01_EL.p3d";
		displayName = "Mine Tunnel 01";
	};
	class Land_Edaly_mine_tunnel_02 : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Mines\mine_tunnel_02_EL.p3d";
		displayName = "Mine Tunnel 02";
	};
	class Land_Edaly_mine_tunnel_03 : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Mines\mine_tunnel_03_EL.p3d";
		displayName = "Mine Tunnel 03";
	};
	class Land_Edaly_mine_ground_01 : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Mines\mine_ground_01_EL.p3d";
		displayName = "Mine Ground 01";
	};
	class Land_Edaly_front_sign_01 : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Mines\mine_front_sign_EL.p3d";
		displayName = "Mine Front Sign 01";
	};

	class Edaly_Rock : Thing {
	  armor = 9999999999;
	  scope = 2;
	  author=$STR_EDALY_AUTHOR;
	  editorCategory = "EdCat_Edaly";
	  editorSubcategory = "EdSubcat_Edaly_Vegetation";
	};

    /* Trees */

	class Land_Edaly_FallenTree_F : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\FallenTree\FallenTree.p3d";
		displayName = "Fallen Tree";
	};
	class Land_Edaly_Tropic_01 : Static
	{
		scope = 2;
		displayName = "Tropic 03";
		model = "Edaly_Vegetation\Tree\Tropic_03\t_tropic_03.p3d";
		editorCategory = "EdCat_Edaly_Arma";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
	};
	/* Silver Ore */
	  class Land_Edaly_Silver_Ore_01_F: Edaly_Rock
	  {
	    displayName = "Grande Veine d'argent";
	    model = "\Edaly_Vegetation\Ore\silver\Edaly_Silver_Ore_01_F.p3d";
	  };

	  class Land_Edaly_Silver_Ore_02_F: Edaly_Rock
	  {
	    displayName = "Moyenne Veine d'argent";
	    model = "\Edaly_Vegetation\Ore\silver\Edaly_Silver_Ore_02_F.p3d";
	  };

	  class Land_Edaly_Silver_Ore_03_F: Edaly_Rock
	  {
	    displayName = "Petite Veine d'argent";
	    model = "\Edaly_Vegetation\Ore\silver\Edaly_Silver_Ore_03_F.p3d";
	  };
	/* Silver Ore */

	/* Iron Ore */
	  class Land_Edaly_Iron_Ore_01_F: Edaly_Rock
	  {
	    displayName = "Grande Veine de Fer";
	    model = "\Edaly_Vegetation\Ore\Iron\Edaly_Iron_Ore_01_F.p3d";
	  };
	  class Land_Edaly_Iron_Ore_02_F: Edaly_Rock
	  {
	    displayName = "Moyenne Veine de Fer";
	    model = "\Edaly_Vegetation\Ore\Iron\Edaly_Iron_Ore_02_F.p3d";
	  };
	  class Land_Edaly_Iron_Ore_03_F: Edaly_Rock
	  {
	    displayName = "Petite Veine de Fer";
	    model = "\Edaly_Vegetation\Ore\Iron\Edaly_Iron_Ore_03_F.p3d";
	  };
	/* Iron Ore */

	/* Copper Ore */
	  class Land_Edaly_Copper_Ore_01_F: Edaly_Rock
	  {
	    displayName = "Grande Veine de Cuivre";
	    model = "\Edaly_Vegetation\Ore\Copper\Edaly_Copper_Ore_01_F.p3d";
	  };
	  class Land_Edaly_Copper_Ore_02_F: Edaly_Rock
	  {
	    displayName = "Moyenne Veine de Cuivre";
	    model = "\Edaly_Vegetation\Ore\Copper\Edaly_Copper_Ore_02_F.p3d";
	  };
	  class Land_Edaly_Copper_Ore_03_F: Edaly_Rock
	  {
	    displayName = "Petite Veine de Cuivre";
	    model = "\Edaly_Vegetation\Ore\Copper\Edaly_Copper_Ore_03_F.p3d";
	  };
	/* Copper Ore */

	/* Nickel Ore */
	  class Land_Edaly_Nickel_Ore_01_F: Edaly_Rock
	  {
	    displayName = "Grande Veine de Nickel";
	    model = "\Edaly_Vegetation\Ore\Nickel\Edaly_Nickel_Ore_01_F.p3d";
	  };
	  class Land_Edaly_Nickel_Ore_02_F: Edaly_Rock
	  {
	    displayName = "Moyenne Veine de Nickel";
	    model = "\Edaly_Vegetation\Ore\Nickel\Edaly_Nickel_Ore_02_F.p3d";
	  };
	  class Land_Edaly_Nickel_Ore_03_F: Edaly_Rock
	  {
	    displayName = "Petite Veine de Nickel";
	    model = "\Edaly_Vegetation\Ore\Nickel\Edaly_Nickel_Ore_03_F.p3d";
	  };
	/* Nickel Ore */

	/* Gold Ore */
	  class Land_Edaly_Gold_Ore_01_F: Edaly_Rock
	  {
	    displayName = "Grande Veine d'Or";
	    model = "\Edaly_Vegetation\Ore\Gold\Edaly_Gold_Ore_01_F.p3d";
	  };
	  class Land_Edaly_Gold_Ore_02_F: Edaly_Rock
	  {
	    displayName = "Moyenne Veine d'Or";
	    model = "\Edaly_Vegetation\Ore\Gold\Edaly_Gold_Ore_02_F.p3d";
	  };
	  class Land_Edaly_Gold_Ore_03_F: Edaly_Rock
	  {
	    displayName = "Petite Veine d'Or";
	    model = "\Edaly_Vegetation\Ore\Gold\Edaly_Gold_Ore_03_F.p3d";
	  };
	/* Gold Ore */
	class land_edaly_palm_01 : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Palm\t_palm_01_F.p3d";
		displayName = "Baby Palm";
	};
	class Land_Edaly_Potato_Plant_F : Thing {
	    scope = 2;
	    author=$STR_EDALY_AUTHOR;
	    editorCategory = "EdCat_Edaly";
	    editorSubcategory = "EdSubcat_Edaly_Vegetation";
	    model = "Edaly_Vegetation\Potato_Plant\Potato_Plant_F.p3d";
	    displayName = "Patate";
	};
	class Land_Edaly_Carrot_Plant_F : Thing {
	    scope = 2;
	    author=$STR_EDALY_AUTHOR;
	    editorCategory = "EdCat_Edaly";
	    editorSubcategory = "EdSubcat_Edaly_Vegetation";
	    model = "Edaly_Vegetation\Carrot\carrot_Plant_F.p3d";
	    displayName = "Patate";
	};
	class land_edaly_tobacco : Thing {
		author=$STR_EDALY_AUTHOR;
		scope = 2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\tobacco\tobacco_F.p3d";
		displayName = "Pied de tabac";
	};
	class Land_wheat_01_F : Thing {
		scope = 2;
	    author=$STR_EDALY_AUTHOR;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Wheat\wheat_01_F.p3d";
		displayName = "Wheat";
	};
	class Land_pond : Thing {
		scope = 2;
	    author=$STR_EDALY_AUTHOR;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Water\pond.p3d";
		displayName = "pond";
	};
	class Land_swamps_water : Thing {
		scope = 2;
	    author=$STR_EDALY_AUTHOR;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Vegetation";
		model = "Edaly_Vegetation\Water\swamps_water.p3d";
		displayName = "swamps_water";
	};
	class Edaly_Decal_Asphalt_01: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal Road Asphalt";
		model="\Edaly_Decals\data\Asphalt\asphalt_patch_01_F.p3d";
		vehicleClass = "Land_Edaly_Asphalt_01";
		destrType = "DestructNo";
		keepHorizontalPlacement = 0;
	};
	class Edaly_Decal_Pavement_01: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal pavement";
		model="\Edaly_Decals\data\pavement\decal_pavement_01.p3d";
		vehicleClass = "Land_Edaly_pavement_01";
		destrType = "DestructNo";
		keepHorizontalPlacement = 0;
	};
	class Edaly_Decal_Place_01: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal Place d'Armes";
		model="\Edaly_Decals\data\cobblestone\decal_place_EL.p3d";
		vehicleClass = "Land_Edaly_Place_01";
		destrType = "DestructNo";
		keepHorizontalPlacement = 0;
	};
	class Edaly_Decal_Kazino_01: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal Kazino";
		model="\Edaly_Decals\data\Walls\decal_kazino_01_F.p3d";
		vehicleClass = "Land_Decal_Kazino_01";
		destrType = "DestructNo";
	};
	class Edaly_Decal_Tropicool_01: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal tropicool";
		model="\Edaly_Decals\data\Walls\decal_tropicool_01_F.p3d";
		vehicleClass = "Land_Decal_tropicool_01";
		destrType = "DestructNo";
	};
	class Edaly_Decal_Rebel_01: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal Propa 01";
		model="\Edaly_Decals\data\Walls\decal_prop_rebel_01.p3d";
		vehicleClass = "Land_Decal_Rebel_01";
		destrType = "DestructNo";
	};
	class Edaly_Decal_Rebel_02: Edaly_Decal_Rebel_01
	{
		displayName="Decal Propa 02";
		model="\Edaly_Decals\data\Walls\decal_prop_rebel_02.p3d";
	};
	class Edaly_Decal_Rebel_03: Edaly_Decal_Rebel_01
	{
		displayName="Decal Propa 03";
		model="\Edaly_Decals\data\Walls\decal_prop_rebel_03.p3d";
	};
	class Edaly_Decal_Malehead_01: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal Malehead";
		model="\Edaly_Decals\data\Walls\decal_Malehead_01_F.p3d";
		vehicleClass = "Land_Decal_Malehead_01";
		destrType = "DestructNo";
	};
	class Edaly_Decal_Stgeorge_01: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal Stgeorge 1";
		model="\Edaly_Decals\data\Walls\decal_stgeorge_01_EL.p3d";
		vehicleClass = "Land_Decal_Stgeorge_01";
		destrType = "DestructNo";
	};
	class Edaly_Decal_Stgeorge_02: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal Stgeorge 2";
		model="\Edaly_Decals\data\Walls\decal_stgeorge_02_EL.p3d";
		vehicleClass = "Land_Decal_Stgeorge_02";
		destrType = "DestructNo";
	};
	class Edaly_Decal_Stgeorge_03: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal Stgeorge 3";
		model="\Edaly_Decals\data\Walls\decal_stgeorge_03_EL.p3d";
		vehicleClass = "Land_Decal_Stgeorge_03";
		destrType = "DestructNo";
	};
	class Edaly_Decal_Stgeorge_04: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal Stgeorge 4";
		model="\Edaly_Decals\data\Walls\decal_stgeorge_04_EL.p3d";
		vehicleClass = "Land_Decal_Stgeorge_04";
		destrType = "DestructNo";
	};
	class Edaly_Decal_Stgeorge_05: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal Stgeorge 5";
		model="\Edaly_Decals\data\Walls\decal_stgeorge_05_EL.p3d";
		vehicleClass = "Land_Decal_Stgeorge_05";
		destrType = "DestructNo";
	};
	class Edaly_Decal_Stgeorge_06: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal Stgeorge 6";
		model="\Edaly_Decals\data\Walls\decal_stgeorge_06_EL.p3d";
		vehicleClass = "Land_Decal_Stgeorge_06";
		destrType = "DestructNo";
	};
	//class Edaly_Decal_Stgeorge_07: House_F
	//{
	//	author=$STR_EDALY_AUTHOR;
	//	mapSize=4;
	//	scope=2;
	//	scopeCurator=2;
	//	editorCategory = "EdCat_Edaly";
	//	editorSubcategory = "EdSubcat_Edaly_Decals";
	//	displayName="Decal Stgeorge 7";
	//	model="\Edaly_Decals\data\Walls\decal_stgeorge_07_EL.p3d";
	//	vehicleClass = "Land_Decal_Stgeorge_07";
	//	destrType = "DestructNo";
	//};
	class Edaly_Decal_Asphalt_02: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Cailloux Asphalt 02";
		model="\Edaly_Decals\data\Asphalt\asphalt_patch_02_F.p3d";
		vehicleClass = "Land_Edaly_Asphalt_02";
		destrType = "DestructNo";
		keepHorizontalPlacement = 0;
	};
	class Edaly_Decal_Asphalt_03: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Route Cracked Asphalt";
		model="\Edaly_Decals\data\Asphalt\asphalt_patch_03_F.p3d";
		vehicleClass = "Land_Edaly_Asphalt_03";
		destrType = "DestructNo";
		keepHorizontalPlacement = 0;
	};
	class Edaly_Decal_Asphalt_large: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal Asphalt Large";
		model="\Edaly_Decals\data\Asphalt\asphalt_patch_large_F.p3d";
		vehicleClass = "Land_Edaly_Asphalt_large";
		destrType = "DestructNo";
		keepHorizontalPlacement = 0;
	};
	class Edaly_Decal_Hay_large: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal Hay Large";
		model="\Edaly_Decals\data\Hay\hay_scatter_large_F.p3d";
		vehicleClass = "Land_Edaly_Hay_large";
		destrType = "DestructNo";
		keepHorizontalPlacement = 0;
	};
	class Land_Decal_cobblestone_01: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal Cobblestone";
		model="\Edaly_Decals\data\cobblestone\decal_cobble_01.p3d";
		destrType = "DestructNo";
	};
	class Land_Decal_mossy_cobblestone: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal Cobblestone (Mossy)";
		model="\Edaly_Decals\data\cobblestone\decal_cobble_mossy.p3d";
		destrType = "DestructNo";
	};
	class Edaly_Decal_Dirt_01: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal boue 01";
		model="\Edaly_Decals\data\Dirt\decal_dirt_01_F.p3d";
		vehicleClass = "Land_Edaly_Dirt_01";
		destrType = "DestructNo";
	};
	class Edaly_Decal_Dirt_02: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal Terre 01";
		model="\Edaly_Decals\data\Dirt\decal_dirt_02_F.p3d";
		vehicleClass = "Land_Edaly_Dirt_02";
		destrType = "DestructNo";
	};
	class Edaly_Decal_Dirt_03: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal Terre 02";
		model="\Edaly_Decals\data\Dirt\decal_dirt_03_F.p3d";
		vehicleClass = "Land_Edaly_Dirt_03";
		destrType = "DestructNo";
	};
	class Edaly_Decal_Drain_01: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Bouche d'egout";
		model="\Edaly_Decals\data\Drain_Cover\drain_cover_01_F.p3d";
		vehicleClass = "Land_Edaly_Drain_01";
		destrType = "DestructNo";
		keepHorizontalPlacement = 0;
	};
	class Edaly_Decal_Moss_01: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal Mousse 01";
		model="\Edaly_Decals\data\Moss\decal_moss_01_F.p3d";
		vehicleClass = "Land_Edaly_Moss_01";
		destrType = "DestructNo";
	};
	class Edaly_Decal_Mulch_01: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal Paillis (coco)";
		model="\Edaly_Decals\data\Mulch\decal_mulch_01_F.p3d";
		vehicleClass = "Land_Edaly_Mulch_01";
		destrType = "DestructNo";
	};
	class Edaly_Decal_SilkOak: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal SilkOak";
		model="\Edaly_Decals\data\silkoak\decal_silkoak.p3d";
		vehicleClass = "Land_Edaly_SilkOak_01";
		destrType = "DestructNo";
	};
	class Edaly_Decal_Blacksand: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal Black Sand";
		model="\Edaly_Decals\data\sand\decal_blacksand.p3d";
		vehicleClass = "Land_Edaly_Blacksand_01";
		destrType = "DestructNo";
	};
	class Edaly_Decal_Sulfur: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal Sulfur";
		model="\Edaly_Decals\data\sulfur\decal_Sulfur.p3d";
		vehicleClass = "Land_Edaly_Sulfur_01";
		destrType = "DestructNo";
	};
	class Edaly_Decal_Rug_01: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal Tapis 01";
		model="Edaly_Decals\data\Rug\decal_rug_01_F.p3d";
		vehicleClass = "Land_Edaly_Rug_01";
		destrType = "DestructNo";
	};
	class Edaly_Decal_Scatter_01: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Scatter 01";
		model="\Edaly_Decals\data\Scatter\scatter_01_F.p3d";
		vehicleClass = "Land_Edaly_Scatter_01";
		destrType = "DestructNo";
	};
	class Edaly_Decal_Scatter_02: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Scatter 02";
		model="\Edaly_Decals\data\Scatter\scatter_02_F.p3d";
		vehicleClass = "Land_Edaly_Scatter_01";
		destrType = "DestructNo";
	};
	class Edaly_Decal_Sidewalk_01: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Sidewalk 01";
		model="\Edaly_Decals\data\Sidewalk\sidewalk_01_F.p3d";
		vehicleClass = "Land_Edaly_Sidewalk_01";
		destrType = "DestructNo";
	};
	class Edaly_Decal_Tracks_01: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Tracks 01";
		model="\Edaly_Decals\data\Tracks\Track_01_F.p3d";
		vehicleClass = "Land_Edaly_Tracks_01";
		destrType = "DestructNo";
	};
	class Edaly_Decal_DeadLeaves_01: House_F
	{
		author=$STR_EDALY_AUTHOR;
		mapSize=4;
		scope=2;
		scopeCurator=2;
		editorCategory = "EdCat_Edaly";
		editorSubcategory = "EdSubcat_Edaly_Decals";
		displayName="Decal Feuilles mortes (bordures)";
		model="\Edaly_Decals\data\Dead_Leaves\decal_deadleaves_01_F.p3d";
		vehicleClass = "Land_Edaly_DeadLeaves_01";
		destrType = "DestructNo";
	};
};

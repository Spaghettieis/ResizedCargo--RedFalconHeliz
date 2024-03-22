class CfgPatches
{
    class ResizedCargo_RedFalconHeliz
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]={
            "DZ_Data",
            "DZ_Scripts",
            "DZ_Vehicles_Wheeled",
			"DZ_Vehicles_Parts",
			"RFFSHeli_Core",
			"RFFSHeli_Bell429_Heli",
			"RFFSHeli_Apache_Heli",
			"RFFSHeli_Blackhawk_Heli",
			"RFFSHeli_Bo105m_Heli",
			"RFFSHeli_CH47_mod",
			"RFFSHeli_CH53e_mod",
			"RFFSHeli_EC135_Heli",
			"RFFSHeli_Ka26_Heli",
			"RFFSHeli_LittleBird_Heli",
			"RFFSHeli_Mi2_Heli",
			"RFFSHeli_R22_Heli",
			"RFFSHeli_S76_Heli",
			"RFFSHeli_UH1H_Heli"
        };
    };
};

class CfgMods
{
	class ResizedCargo_RedFalconHeliz
    {
        dir="ResizedCargo_RedFalconHeliz";
        picture="";
        action="";
        hideName=1;
        hidePicture=1;
        name="ResizedCargo: RedFalconHeliz";
        credits="RedFalcon";
        author="Spaghettieis";
        authorID="76561199363100280";
        version="1.0";
        extra=0;
        type="mod";
        dependencies[]=
        {
            "World"
        };
	};
};

// Start ResizedCargo_RedFalconHeliz mod

class CfgVehicles
{    
	class Inventory_Base;
    class Container_Base;
    class WorldContainer_Base;
    class CarScript;
	class RFFSHeli_base;
	class RFFSHeli_Apache: RFFSHeli_base   
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_Apache_Winter: RFFSHeli_Apache   
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_Apache_Desert: RFFSHeli_Apache   
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_AS350: RFFSHeli_base    
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_Bell429: RFFSHeli_base    
		{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_Bell429_Medic: RFFSHeli_Bell429      
		{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_Bell429_Police: RFFSHeli_Bell429   
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_Bell429_Uganda: RFFSHeli_Bell429    
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_Bell429_ZS: RFFSHeli_Bell429    
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_Blackhawk: RFFSHeli_base 		
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};   //default: 10, 80
		};
	};
	class RFFSHeli_Blackhawk_blackblackhawk: RFFSHeli_Blackhawk				
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_Blackhawk_Budhawk: RFFSHeli_Blackhawk			
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_Blackhawk_Woodland: RFFSHeli_Blackhawk		
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_Bo105m: RFFSHeli_base					
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};						//default: 10, 60
		};
	};
	class RFFSHeli_Bo105m_blackcamo: RFFSHeli_Bo105m		
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};					 
		};
	};
	class RFFSHeli_CH47: RFFSHeli_base					
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};					//default: 10, 100
		};
	};
	class RFFSHeli_CH53e: RFFSHeli_base						
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};					//default: 10, 100			
		};
	};
	class RFFSHeli_EC135: RFFSHeli_base
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_EC135_BlackCamo: RFFSHeli_EC135
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_Ka26: RFFSHeli_base
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_LittleBird: RFFSHeli_base
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_LittleBird_Camo: RFFSHeli_LittleBird
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_LittleBird_Desert: RFFSHeli_LittleBird
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_Mi2: RFFSHeli_base
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_Mi2_Military: RFFSHeli_Mi2
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_Mi2_Hornet: RFFSHeli_Mi2
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_R22: RFFSHeli_base
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_R22_Black: RFFSHeli_R22
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_R22_Red: RFFSHeli_R22
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_S76: RFFSHeli_base
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_S76_WoodlandCamo: RFFSHeli_S76
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};					//default: {10, 60}
		};
	};
	class RFFSHeli_UH1H: RFFSHeli_base
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class RFFSHeli_UH1H_Combat: RFFSHeli_UH1H
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
};

// END ResizedCargo_RedFalconHeliz mod


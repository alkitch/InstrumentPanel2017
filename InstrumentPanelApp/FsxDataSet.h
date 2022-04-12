#pragma once

#define FSX_SERVER_PORT 48123

#pragma pack(push,1)
typedef struct _FSX_SIM_DATA_INFO
{
	double airspeed_true;             //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "AIRSPEED", "Knots");
	double vertical_speed;            //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "VERTICAL SPEED", "Feet per second");
	double indicated_altitude;        //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "INDICATED ALTITUDE", "Feet");
	double kohlsman_setting;          //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "KOHLSMAN SETTING MB", "Millibars");
	double pitch_degrees;			  //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "ATTITUDE INDICATOR PITCH DEGREES", "Radians");
	double bank_degrees;              //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "ATTITUDE INDICATOR BANK DEGREES", "Radians");
	double heading;                   //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "PLANE HEADING DEGREES GYRO", "Radians");
	double rpm;						  //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "GENERAL ENG RPM:1", "Rpm");
	double heading_rate;              //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "DELTA HEADING RATE", "Radians per second");
	double turnball;				  //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "TURN COORDINATOR BALL", "Position");

	double oiltemp;                   //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "ENG OIL TEMPERATURE:1", "Rankine");	ENG OIL TEMPERATURE:index Engine oil temperature Rankine
	double oilpressure; 			  //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "ENG OIL PRESSURE:1", "Pounds per square foot"); ENG OIL PRESSURE:index Engine oil pressure Pounds per square foot
	double fuelleft; 			  //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "FUEL TOTAL QUANTITY", "Gallons") Current quantity in volume Gallons
	double fuelright;              //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "FUEL TOTAL CAPACITY", "Gallons") Total capacity of the aircraft Gallons



}FSX_SIM_DATA_INFO;
#pragma pack(pop)

#pragma pack(push,1)
typedef struct _FSX_SIM_DATA
{
	double airspeed_true;             //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "AIRSPEED", "Knots");
	double vertical_speed;            //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "VERTICAL SPEED", "Feet per second");
	double indicated_altitude;        //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "INDICATED ALTITUDE", "Feet");
	double kohlsman_setting;          //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "KOHLSMAN SETTING MB", "Millibars");
	double pitch_degrees;			  //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "ATTITUDE INDICATOR PITCH DEGREES", "Radians");
	double bank_degrees;              //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "ATTITUDE INDICATOR BANK DEGREES", "Radians");
	double heading;                   //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "PLANE HEADING DEGREES GYRO", "Radians");
	double rpm;						  //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "GENERAL ENG RPM:1", "Rpm");
	double heading_rate;              //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "DELTA HEADING RATE", "Radians per second");
	double turnball;				  //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "TURN COORDINATOR BALL", "Position");

	double oiltemp;                   //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "ENG OIL TEMPERATURE:1", "Rankine");	ENG OIL TEMPERATURE:index Engine oil temperature Rankine
	double oilpressure; 			  //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "ENG OIL PRESSURE:1", "Pounds per square foot"); ENG OIL PRESSURE:index Engine oil pressure Pounds per square foot
	double fuelleft; 			  //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "FUEL TOTAL QUANTITY", "Gallons") Current quantity in volume Gallons
	double fuelright;              //SimConnect_AddToDataDefinition(hSimConnect, DEFINITION_1, "FUEL TOTAL CAPACITY", "Gallons") Total capacity of the aircraft Gallons
	INT32  simstatus;


}FSX_SIM_DATA;
#pragma pack(pop)

private _vehicle = vehicle player;
private _boostStatus = _vehicle getvariable ["laat_is_boosting",false];

private _3asBurnList=["187th_LAAT"];

if ((driver _vehicle != player) OR !_boostStatus OR (_3asBurnList findIf {_x isEqualTo typeOf _vehicle} < 0)) exitWith{};

private ["_vel", "_dir"];

_vehicle setvariable ["laat_is_boosting",false,true];
hint format["Impulse Disengaged\n\nPower to stabilization thrusters"];
_vel = velocity _vehicle;
_dir = direction _vehicle;
_vehicle setVelocity [
(_vel select 0) + (sin _dir * -25),
(_vel select 1) + (cos _dir * -25),
(_vel select 2)
];
sleep 2;
hintSilent "";

while {(!(_vehicle getvariable ["laat_is_boosting",false]) AND (speed _vehicle > 100))} do
{
	_vel = velocity _vehicle;
	_dir = direction _vehicle;
	_vehicle setVelocity [
	(_vel select 0) + (sin _dir * -25),
	(_vel select 1) + (cos _dir * -25),
	(_vel select 2)
	];
	sleep 0.5;
};

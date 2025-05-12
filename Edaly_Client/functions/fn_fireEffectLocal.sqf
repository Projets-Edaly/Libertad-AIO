/* Copyright 2018 - Association Projets Edaly. All rights reserved */

params [
  	["_fire", objNull, [objNull]],
  	["_smoke", objNull, [objNull]],
  	["_size", 0, [0]],
  	["_particlesize", 0, [0]],
  	["_densite", 0, [0]]
  ];

 if (isNull(_fire) || isNull(_smoke)) exitWith {false};

_fire setVariable ["ColorRed",0.5,false];
_fire setVariable ["ColorGreen",0.5,false];
_fire setVariable ["ColorBlue",0.5,false];
_fire setVariable ["ParticleLifeTime",1.5,false];
_fire setVariable ["ParticleDensity",_densite,false];
_fire setVariable ["ParticleSize",_particulesize,false];
_fire setVariable ["ParticleSpeed",2,false];
_fire setVariable ["EffectSize",_size, false];
_fire setVariable ["ParticleOrientation",0,false];
_fire setVariable ["FireDamage",3,false];

_smoke setVariable ["ParticleDensity",5,false];
_smoke setVariable ["ParticleSize",5,false];
_smoke setVariable ["EffectSize",2, false];

true;

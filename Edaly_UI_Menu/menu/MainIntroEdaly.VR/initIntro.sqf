cutText ["", "BLACK FADED", 69]; 
enableEnvironment false;
showCinemaBorder false;

while {true} do 
{
	_video = ["Edaly_UI_Menu\menu\EdalyMainMenuVideo.ogv"] spawn BIS_fnc_playVideo;
	waitUntil {scriptDone _video};	
};

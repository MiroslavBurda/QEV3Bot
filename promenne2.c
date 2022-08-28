

/*	Program "Promìnné 2" pro simulátor QEV3BotSim

*/

task main()
{
	int pocet=4;  
	float dalsi_pocet = 1.2; // float - reálné èíslo 
	// desetinná TEÈKA 
	bool je_to_spravne; // true/false; 0/jiné èíslo
	// nemá zatím pøiøazenou hodnotu -> mùže v ní být cokoliv (tohle nechcete!!)
	
	pocet++; 
	displayTextLine(3, "Poèet: %i", pocet);
	
	dalsi_pocet = 1.2 * 4; 
	displayTextLine(5, "Další poèet: %f", dalsi_pocet);
	
	pocet = dalsi_pocet + 5;
	displayTextLine(7, "Poèet: %i", pocet);
	
	pocet = 7 / 5;
	displayTextLine(9, "Poèet: %i", pocet);
	
	delay(10000);	// èekání v milisekundách
}



/*	Program "Prom�nn� 2" pro simul�tor QEV3BotSim

*/

task main()
{
	int pocet=4;  
	float dalsi_pocet = 1.2; // float - re�ln� ��slo 
	// desetinn� TE�KA 
	bool je_to_spravne; // true/false; 0/jin� ��slo
	// nem� zat�m p�i�azenou hodnotu -> m��e v n� b�t cokoliv (tohle nechcete!!)
	
	pocet++; 
	displayTextLine(3, "Po�et: %i", pocet);
	
	dalsi_pocet = 1.2 * 4; 
	displayTextLine(5, "Dal�� po�et: %f", dalsi_pocet);
	
	pocet = dalsi_pocet + 5;
	displayTextLine(7, "Po�et: %i", pocet);
	
	pocet = 7 / 5;
	displayTextLine(9, "Po�et: %i", pocet);
	
	delay(10000);	// �ek�n� v milisekund�ch
}

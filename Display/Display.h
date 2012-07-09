
class Display
{

	public:
		Display(int, int, int, int, int, int, int, int, int, int, int);
		void displayNumber(int);
		void lightNumber(int);
	private:
		int digit1;        //PWM Display pin 1
		int digit2;        //PWM Display pin 2
		int digit3;        //PWM Display pin 6
		int digit4;        //PWM Display pin 8

		int segA;          //Display pin 14
		int segB;          //Display pin 16
		int segC;          //Display pin 13
		int segD;          //Display pin 3
		int segE;          //Display pin 5
		int segF;          //Display pin 11
		int segG;          //Display pin 15
};

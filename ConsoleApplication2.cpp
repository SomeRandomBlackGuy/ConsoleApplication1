#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int Partner(int Response);
int MrGurd(int conversation);

int main()
{
	string Player;
	int choice;
	int Pressure_Level = 0;
	int hours = 4;
	bool Partner_A = false;
	bool solve = false;
	bool MAYOR = false;
	int MOSSEN = 0;

	cout << "\t\t\t\t\t\t\tTitle: PAWN\n" << endl;
	system("pause");
	cout << "\n" << endl;
	cout << "\n" << endl;
	cout << "\n" << endl;

	cout << "\t\t\tScene begins with the Deputy walking into the Chief of Police's office." << endl;
	cout << "\n" << endl;
	cout << "\n" << endl;

	system("pause");


	cout << "\n" << endl;
	cout << "\n" << endl;

	cout << "Deputy: Chief, a man has come forward with information on the Governors daughter’s whereabouts. He says his name is Relaed Gurd.\n" << endl;

	cout << "\n" << endl;
	cout << "\n" << endl;

	cout << "Chief: We’ll what does he know?\n" << endl;

	cout << "\n" << endl;
	cout << "\n" << endl;

	cout << "Deputy: He said she was kidnapped by a hired hand from an unknown source." << endl;
	cout << "The source had her taken and Mr. Gurd’s wife and son." << endl;
	cout << "The informant said he would tell us where the girl is if we agree to have Markel (Mossen) Burg freed from prison." << endl;
	cout << "Once Mossen recieves his pardon the girl and his family would be released" << endl;
	cout << "We have four hours to comply or the girl will be killed along with Mr Gurds family" << endl;
	cout << "If the girl is found before Mossen is free his family will be exected";

	cout << "\n" << endl;
	cout << "\n" << endl;

	cout << "Chief: How do we know he’s telling the truth ?\n" << endl;
	cout << "\n" << endl;

	cout << "Deputy : He has the victim’s locket and it was confirmed by the Governor. Who do you want to put on this case ?\n" << endl;
	cout << "\n" << endl;

	cout << "Please enter the name of the interrogation specialist." << endl;
	cin >> Player;
	cout << "\n" << endl;
	cout << "\n" << endl;

	cout << "Chief: Agent " << Player;
	cout << "\n" << endl;
	cout << "\n" << endl;

	cout << "Deputy: You think this case needs " << Player << " help to solve it. I though " << Player << " was on a flight to South America to take down one of Number’s contact ?" << endl;

	cout << "\n" << endl;
	cout << "\n" << endl;

	cout << "Chief: Deputy….. this is the Governor’s daughter, do what ever you must do to get " << Player << " down here right NOW!" << endl;
	cout << "If she dies that all of our asses." << endl;

	cout << "\n" << endl;
	cout << "\n" << endl;



	system("pause");

	cout << "\t\t\tScene begins with " << Player << " walking into the interrogation room." << endl;

	cout << "\n" << endl;
	cout << "\n" << endl;

	cout << "There are " << hours << " hours remaining" << endl;
	cout << "\n" << endl;
	cout << "\n" << endl;

	cout << "Subconcouis: Should I call in another agent or go at this alone?\n" << endl;
	cout << "Enter 1 to call in another agent\n" << endl;
	cout << "Enter 2 to sit down infront of Mr. Gurd\n" << endl;
	cin >> choice;

	cout << "\n" << endl;
	cout << "\n" << endl;


	if (choice == 1)
	{
		cout << Player << ":My name is Agent " << Player << "Im here to help you get your family back and save the Governors daughter." << endl;
		cout << Player << " knocks on the door and another gentlemen walks in." << endl;
		Partner(0);
		Partner_A = true;
	}
	else if (choice == 2)
	{
		cout << Player << " sits down infront of Mr. Gurd." << endl;
		cout << Player << ":My name is Agent " << Player << " Im here to help you get your family back and save the Governors daughter." << endl;

	}
	else
	{
		cout << "Subconcous: I can feel the lack of coffee getting to me" << endl;
		cout << "\n" << endl;
		hours = hours - 1;
		cout << "There are " << hours << " hours remaining" << endl;
		cout << "\n" << endl;
		cout << "Subconcouis: Should I call in another agent or go at this alone?\n" << endl;
		cout << "Enter 1 to call in another agent\n" << endl;
		cout << "Enter 2 to sit down infront of Mr. Gurd\n" << endl;
		cin >> choice;

	}
	system("pause");
	cout << "There are " << hours << " hours remaining" << endl;
	cout << "\n" << endl;
	cout << "\n" << endl;

	cout << "Mr. Gurd: Can I please have that cigarette that the deputy said he would bring me? \n" << endl;
	cout << "Enter 1 to give Mr. Gurd the pack and lighter\n" << endl;
	cout << "Enter 2 to to decline" << endl;
	cin >> choice;
	
	if (choice == 1) 
	{
		cout << "You hand Mr. Gurd his a pack of smokes and he begins smoking." << endl;
		if (Partner_A == true)
		{
			cout << "Lloryap: This is not the time for Mr. Gurd to be getting comfortable smoking like there isn't any tomorrow." << endl;
		}
	}
	else if (choice == 2) 
	{
		cout << Player << ": You don't need any smokes right now this is much more important than your bad habits." << endl;
		Pressure_Level = Pressure_Level + 3;
		if (Partner_A == true)
		{
			cout << "Lloryap: You could have given him the pack he's had a hard day." << endl;
		}
	}
	else {
		cout << "As you walk towards Mr. Gurd you stumble into him and hit him in the face.\n" << endl;
		Pressure_Level = Pressure_Level + 5;
		if (Partner_A == true)
		{
			cout << "Lloryap: WTF! We are so sorry Mr. Gurd." << endl;
			cout << Player << ": I'm fine just a little tired." << endl;
			cout << ": It took some time to settle the room down." << endl;
			hours = hours - 1;
			MrGurd(0);
		}
	}
	cout << "There are " << hours << " hours remaining" << endl;
	cout << "\n" << endl;
	cout << "\n" << endl;

	while (hours != 0 || Pressure_Level <= 7 || solve != true ||MAYOR !=true )
	
	{
		cout << "What would you like to do? " << endl;
		cout << "If you would like to ask about the man who informed him of the kidnapping press 1" << endl;
		cout << "If you would like to ask about the crime bosses Mossen and Numbers press 2" << endl;
		cout << "If you would like to go over the evidence with Mr. Gurd press 3" << endl;
		cout << "If you would like to pardon Mossen press 4" << endl;
		cout << "If you would like to (work over) Mr Gurd press 5" << endl;
		cout << "If you would like to ask Mr. Gurd about himself press 6" << endl;

		int ticker;
		cin >> ticker;

		// cout << "If you would like to ask about the man who informed him of the kidnapping press 1" << endl;
		if (ticker == 1) 
		{
			cout << Player << ": Tell me about this kidnapper." << endl;
			MrGurd(1);
			MrGurd(0);
			if (Partner) 
			{
				Partner(1);
			}
			hours = hours - 1;
		}

		// cout << "If you would like to ask about the crime bosses Mossen and Numbers press 2" << endl;
		else if (ticker == 2)
		{
			cout << "So ... tell me about Mossen and if you know anything about Numbers also." << endl;
			MrGurd(2);
			MrGurd(0);
			if (Partner)
			{
				Partner(1);
				cout << "LLoryap: Your working the Numbers case right? I heard hes quite the tactician." << endl;
			}
			hours = hours - 1;
		
		}

		//cout << "If you would like to go over the evidence with Mr. Gurd press 3" << endl;		
		else if (ticker == 3) 
		{
			cout << Player << ": Bring in the evidnce." << endl;
			MrGurd(3);
			if (Partner)
			{
				Partner(3);
				cout <<Player <<": Your getting kind of angery for a victim." << endl;
			}
			hours = hours - 1;

		}

		// cout << "If you would like to pardon Mossen press 4" << endl;
		else if (ticker == 4)
		{
			cout << Player << ": I don't think we have a choice get him the pardon." << endl;
			MrGurd(4);
			if (Partner)
			{
				Partner(2);
				
			}
			hours = hours - 1;
			MAYOR = true;
		}
		
		// cout << "If you would like to (work over) Mr Gurd press 5" << endl;
		else if (ticker == 5) 
		{
			cout << Player << ": I know you know more than what your saying you piece of shit!" << endl;

			cout << "The beating last for an hour Mr. Gurd seems badly bruised but not surprised by your actions." << endl;
			if (Partner)
			{
				cout << "Lloryap: Damn, if he knows something he might speak if you beat him again." << endl;
				cout << Player << ": Your getting kind of angery for a victim." << endl;
			}
			Pressure_Level += 5;
			hours = hours - 1;
		}

		// cout << "If you would like to ask Mr. Gurd about himself press 6" << endl;
		else if (ticker == 6) 
		{
			cout << Player << ": You know what I find so funny? Your name. " << endl;
			cout << Player << ": What nobody told you was I have been chasing Numbers for quite some time now and I was the person who put Mossen behind bars." << endl;
			cout << Player << ": Numbers has this thing about him where he likes to hide evidence in plane sight." << endl;
			cout << Player << ": Its his middle finger to law enforcement. So I know that your name is Drug Dealer spelled backwords." << endl;
			cout << Player << ": So Mr Drug Dealer if you don't want to get procescuted by the highest courts I advise you to start talking." << endl;
			if (Partner)
			{
				Partner(4);
				
			}
			hours = hours - 1;
			solve = true;
		}
		else {
			cout << "The Governor lost confidence in your interogation skills." << endl;
			cout << "The Governor begins the paperwork to pardon Mossen a notorious killer." << endl;
			MAYOR = true;
		}

		if (hours == 0 || MAYOR || solve || Pressure_Level >= 7) {
			cout << "\n" << endl;
			cout << "\n" << endl;

			break;
		}

		system("pause");
		cout << "There are " << hours << " hours remaining" << endl;
		cout << "\n" << endl;
		cout << "\n" << endl;

	}
	
	if (Pressure_Level >= 7)
	{
		cout << "\n" << endl;
		cout << "\n" << endl;

		cout << "Mr. Gurd finally reached his snapping point." << endl;
		cout << "Mr. Gurd: You know what, this entire time ive been here the only thing that this department is show e how incompitent our cities law enforcement department truly is." << endl;
		cout << "Mr.Gurd:You don't give a fuck about my family or the Governors daughter." << endl;
		cout << "Mr. Gurd: Im taking this to the media and I'm going to sue the shit out of this department! " << endl;
		system("pause");
		hours = 6;
	}
	if (MAYOR) {
		cout << "A detective walks into the room." << endl;
		cout << "Detective: Agent " << Player << " The pardon paperwork has been submitted."<< endl;

	}
	if (solve) {
		hours = hours - 1;
		cout << "Mr. Gurd finally broke down and told the detectives that he is a D R U G    D E A L E R." << endl;
		if (Partner) 
		{
			cout << "He also states that Lloryap is on the P A Y R O L L " << endl;
		}
		else {
			cout << "He then stated he was afraid to tell the truth because Numbers has 75% of the department on the payroll." << endl;
		}
		cout << "He explains the intricate parts to how they put together the crime and the location of the Govenors daughter." << endl;
		system("pause");



	}

	if (hours == 4) 
	{
		cout << "When the detectives got to the scene the girl was found tied down but seemed relatively unharmed." << endl;
	}
	else if (hours == 3)
	{
		cout << "When the detectives got to the scene the girl was found tied down. The horrors of being kidnapped will give her PTSD for years. " << endl;
	}
	else if (hours == 2)
	{
		cout << "When the detectives got to the scene the girl was found tied down passed out. After taking her to the hospital they discovered that she was unconcous. She seems to suffer from memory lost. " << endl;
	}
	else if (hours == 1)
	{
		cout << "When the detectives got to the scene the girl was found tied down passed out. After taking her to the hospital they discovered that she is in a coma. There is no telling when she may wake up. " << endl;
	}
	else if (hours == 0)
	{
		cout << "The Mayors daughters body was found infornt of City Hall missing her head." << endl;
		cout << "Her head was found three weeks later in a mailbox with a note stating that this is only the beginning." << endl;

	}
	else
	{
		cout << "Mossen was broken out of prison during a prison uprising. The Governors daughter was never found. The streets ran red." << endl;
	}

	system("pause");


	return 0;
}



int Partner(int Response)
{
	if (Response == 0 )
	{
		cout << "Lloryap: Hello, im Agent Lloryap. Im here to help assit in this case." << endl;
	}
	else if (Response == 1)
	{
		cout << "Lloryap: Listen buddy, Mossen is a hardened criminal. His gang runs the entire Wakko county." << endl;
	
	}
	else if (Response == 2) 
	{
		cout << "Lloryap: Don't feel bad boss it had to be done." << endl;
	}
	else if (Response == 3)
	{
		cout << "Lloryap: The chief should have put me as lead on this case." << endl;
	}
	else if (Response == 4) {
		cout << "Lloryap: He's lying that piece of shit! Lloryap runs for the door and gets arrested." << endl;
	}
	return Response;
}


int MrGurd(int conversation) 
{
	if (conversation == 0)
	{
		cout << "Mr Gurd: Why won't you pardon this Mossen guy and free my family and the Governors daughter?" << endl;
		cout << "Mr Gurd: Ive told you and the other officers that I don't know anything else about this." << endl;
		cout << "Mr Gurd: Please just help me save my family." << endl;
	}
	else if (conversation == 1)
	{
		cout << "Mr Gurd: The only thing that I really know about that guy is hes crazy man!. He had a bunch of people jump me after I got off of work and then I woke up in this place I wasn't familiar with." << endl;
		cout << "Mr Gurd: They gave me that locket and told me where they were going to hide the girl. They said if the police resuce the girl before Mossen got out they would kill her." << endl;
		cout << "Mr Gurd: They knocked me back out and I woke up in a car a parking lot. They left my sons baseball mit in the passenger seat so I knew all of this was real." << endl;
	}
	else if (conversation == 2)
	{
		cout << "Mr Gurd: Ive never heard of Numbers or Mossen. Number's name never came up during any conversation. Why do you care about Numbers even if he is real this probably has nothing to do with him." << endl;
	}
	else if (conversation == 3)
	{
		cout << "Mr Gurd: What in the fuck for I wasn't at the scene of the crime. Im the fucking victim!" << endl;
	}
	else if (conversation == 4)
	{
		cout << "Heres the address to the location. Thank you for saving my family :)" << endl;
	}

	system("pause");


	return conversation;
}


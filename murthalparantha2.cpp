#include <iostream>


using namespace std;

//function to calculate time
int tell_time(int p, int n, int r[], int made, int mr[], int c[]);

//global variable "minute"
//bcoz its needed by both main() and our_function()
int minute = 0;


int main()
{

	int p;		//no of parantahs to make
	int n;		//no of chefs
	int r[100]; //ranks of chefs
	int i;			//loop iterator
	int time;		//ans
	int p_made_by_inidivisual_chef[100];		//paranthas made by indivisual chef
	int mr[100];	//modified rank		rank doubles after each paranta made

	cout << "\n parantahs::";
	cin >> p;
	cout << "\n chefs::";
	cin >> n;

	cout << "\n ranks::";
	for (i = 0; i < n; i++)
	{
		cin >> r[i];			//input rank
		mr[i] = r[i];			//to be modiefed rank initially same as rank
		p_made_by_inidivisual_chef[i] = 0;				//paranthas made by any chef initiallt == 0
	}


		//make(no.of parantha,no.of chef,ranks of chef,total paranthas made,modified rank,parantahs made by each chef)
	time = tell_time(p, n, r, 0, mr,p_made_by_inidivisual_chef);
	cout << "\n\n\n\t\t time reqd::>" << time;
	

	return 0;
}

//make(no.of parantha,no.of chef,ranks of chef,total paranthas made,modified rank,parantahs made by each chef)
int tell_time(int p, int n, int r[], int made, int mr[], int p_made_by_inidivisual_chef[])
{

	{
		minute++;			//increases time by 1min every time
		cout << "\n\n\n minute" << minute;

		for (int i = 0; i < n; i++)		//loop to check if any chef made new parantas
		{

			cout << "\n chef " << i + 1 << " next parantha at : " << mr[i];

			if (mr[i] == minute)				//whenever its time to give a new parantha
			{
				made++;			//total paranthas+1
				p_made_by_inidivisual_chef[i]++;		//increase paratha made by chef + 1
				mr[i] = minute + (p_made_by_inidivisual_chef[i] + 1) * r[i];		//modifies rank// new rank=current time + 2*no of paranths made

				cout << "\n\t\t made:" << made << " by chef " << i + 1;


				if (made == p)		//if reqd paranthas satisfied
				{
					return minute;	//return time reqd and exit
				}
			}
		}

		tell_time(p, n, r, made, mr, p_made_by_inidivisual_chef);		//recursion
	}
}

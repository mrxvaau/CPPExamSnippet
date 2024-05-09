 //Name:MRXVAU
//ID : 24-56434-1
//SERIAL : 28

 #include<iostream>
using namespace std;

int main(){
 
    int atm,hum;
    int sum = 0;

    cout << "\nEnter the number of atmosphic presure : ";
    cin >> atm;
    cout << "Enter the number of humadity presure: ";
    cin >> hum;

    int MATRIC[atm][hum];
    int MATRIC2[atm][hum];       
    int RESULTS[atm][hum];
    int RESULTS2[atm][hum];

    cout<<"\nTHE 1ST MATRIC -->\n";
    for(int loop_row = 0; loop_row < atm; loop_row++)
    {
        for(int loop_col = 0; loop_col < hum; loop_col++)
        {
            cout<<"Enter the Array elements : ["<<loop_row<<"]["<<loop_col<<"]: ";
            cin >> MATRIC[loop_row][loop_col];
        }
    }

    cout<<"\nTHE 2nd MATRIC -->\n";
    for(int loop_row = 0; loop_row < atm; loop_row++)
    {
        for(int loop_col = 0; loop_col < hum; loop_col++)
        {
            cout<<"Enter the Array elements : ["<<loop_row<<"]["<<loop_col<<"]: ";
            cin >> MATRIC2[loop_row][loop_col];
        }
    }

    cout<<"\nTHE 1ST MATRIC -->\n";
    for(int loop_row = 0; loop_row < atm; loop_row++)
    {
        for(int loop_col = 0; loop_col < hum; loop_col++)
        {
             cout<<"\t"<<MATRIC[loop_row][loop_col]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nTHE 2nd MATRIC -->\n";
    for(int loop_row = 0; loop_row < atm; loop_row++)
    {
        for(int loop_col = 0; loop_col < hum; loop_col++)
        {
             cout<<"\t"<<MATRIC2[loop_row][loop_col]<<" ";
        }
        cout<<endl;
    }

    for(int loop_row = 0; loop_row < atm; loop_row++)
    {
        for(int loop_col = 0; loop_col < hum; loop_col++)
        {
            RESULTS[loop_row][loop_col] = MATRIC[loop_row][loop_col] + MATRIC2[loop_row][loop_col];
        }
    }

    for(int loop_row = 0; loop_row < atm; loop_row++)
    {
        for(int loop_col = 0; loop_col < hum; loop_col++)
        {
            RESULTS2[loop_row][loop_col] = MATRIC[loop_row][loop_col] - MATRIC2[loop_row][loop_col];
        }
    }

    cout << "\nTHE THE COMBINED EFFECTS -->" << endl;
    for(int loop_row = 0; loop_row < atm; loop_row++)
    {
        for(int loop_col = 0; loop_col < hum; loop_col++)
        {
            cout<<"\t"<<RESULTS[loop_row][loop_col];
        }
        cout << endl; 
    }

    cout << "\nTHE PRODUCTS REPRESNTS -->" << endl;
    for(int loop_row = 0; loop_row < atm; loop_row++)
    {
        for(int loop_col = 0; loop_col < hum; loop_col++)
        {
            cout<<"\t"<<RESULTS2[loop_row][loop_col];
        }
        cout << endl; 
    }


    for(int loop_row=0;loop_row<atm;loop_row++)
	{
		for(int loop_col=0;loop_col<hum;loop_col++)
		{
			sum = sum + RESULTS[loop_row][loop_col];
		}
		cout<<endl;
	}
	cout<<"overall climate score : "<<sum<<"\n"<<endl;

    return 0;

}
#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;

int main(int argc, char* argv[])
{
    int i,j,r,c;

    if (argc < 3) {
	cout << "Number of rows and columns missing in command line" << endl;
        return -1;
    }

    r = atoi(argv[1]);
    c = atoi(argv[2]);

    int matrx[r][c];
    cout << "rows: "<< r<<endl;
    cout << "columns: "<< c<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            matrx[i][j]= rand();
        }
    }
    //for(i=0;i<r;i++)
    //{
    //    for(j=0;j<c;j++)
    //    {
    //        cout<<matrx[i][j]<<"\t";
    //    }
    //    cout<<endl<<endl;
    //}
    ofstream myfile;
    myfile.open("matrix.dat");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            myfile<<matrx[i][j]<<"\t";
        }
        myfile<<endl<<endl;
    }
    myfile.close();
    return 0;
}

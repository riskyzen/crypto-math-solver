#include <iostream>
using namespace std;

//variable
int pilih;

//title banner
void title()
{
	cout << R"(

 .----------------.    .----------------.    .----------------.
| .--------------. |  | .--------------. |  | .--------------. |
| |     ______   | |  | | ____    ____ | |  | |    _______   | |
| |   .' ___  |  | |  | ||_   \  /   _|| |  | |   /  ___  |  | |
| |  / .'   \_|  | |  | |  |   \/   |  | |  | |  |  (__ \_|  | |
| |  | |         | |  | |  | |\  /| |  | |  | |   '.___`-.   | |
| |  \ `.___.'\  | |  | | _| |_\/_| |_ | |  | |  |`\____) |  | |
| |   `._____.'  | |  | ||_____||_____|| |  | |  |_______.'  | |
| |              | |  | |              | |  | |              | |
| '--------------' |  | '--------------' |  | '--------------' |
 '----------------'    '----------------'    '----------------'
                       Crypto Math solver
)" << endl;
}

int main()
{
    title();
    cout<<"[1] Rsa"<<endl;
    cout<<"[2] elgamal"<<endl;
    cout<<"[3] Curva Eliptik"<<endl;
    cout<<"[4] Modular Exponen"<<endl;
    cout<<"[5] Modular Inverse"<<endl;
    cout<<"[6] Prime Check"<<endl;
    cout << endl;
    cout << "--> ";
    cin >> pilih;

    switch (pilih)
    {
        case 1:
        {
            cout << "rsa";
            break;
        }
        case 2:
        {
            cout << "elgamal";
            break;
        }
        case 3:
        {
            cout << "kurva";
            break;
        }
        case 4:
        {
            cout << "modexp";
            break;
        }
        case 5:
        {
            cout << "modinv";
            	
				int modInverse(int a, int m) 
				{ 
				    a = a%m; 
				    for (int x=1; x<m; x++) 
				       if ((a*x) % m == 1) 
				          return x; 
				} 
				  
				int main() 
				{ 
				    int a, m;
				    cout << "a & m = " << a;
				    cin >> a >> m ;
				    cout << modInverse(a, m); 
				    return 0;
				}
				
            break;
        }
        case 6:
        {
            cout << "prime";
            break;
        }
        default:
        {
            cout << "input salah";
        }
    }
}

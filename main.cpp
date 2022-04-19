#include <iostream>

using namespace std;

int main()
{
    int e[3][3], sum;
    cout << "Entrez avec les elements d'un tableau 3x3: " << endl;
    for (int l=0; l<3; l++){
        for (int c=0; c<3; c++){
            cout << "e[" << l+1 << " " << c+1 << "]: ";
            cin >> e[l][c];  
        }
        
    }
    cout << endl << "Ça c'est le tableau: " << endl;
    
     for (int l=0; l<3; l++){
        cout << "[";
        for (int c=0; c<3; c++){
            cout << e[l][c] << " ";  
        }
        cout << "]" << endl;
    }
    cout << endl;
    
    for (int l=0; l<3; l++){
        sum=0;
        for (int c=0; c<3; c++){
            sum=sum+e[l][c];  
        }
        cout << "La somme de la ligne " << l+1 << " est: " << sum << endl;
    }
    
    for (int c=0; c<3; c++){
        sum=0;
        for (int l=0; l<3; l++){
            sum=sum+e[l][c];  
        }
        cout << "La somme de la columne " << c+1 << " est: " << sum << endl;
    }
    return 0;
}

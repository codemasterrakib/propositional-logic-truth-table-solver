#include <iostream>
using namespace std;

int main() {
    char rakib_p, rakib_q;

    cout << "Enter value for p : ";
    cin >> rakib_p;
    cout << "Enter value for q : ";
    cin >> rakib_q;
    bool p = (rakib_p == 'T' || rakib_p == 't');
    bool q = (rakib_q == 'T' || rakib_q == 't');

    bool negation_p = !p;
    bool negation_q = !q;
    bool conjunction = p && q;
    bool disjunction = p || q;
    bool implication = !p || q;       
    bool biconditional = (p == q);    
 
    cout << "Negation: " << (negation_p ? 'T' : 'F') << endl;
    cout << "Negation: " << (negation_q ? 'T' : 'F') << endl;
    cout << "Conjunction: " << (conjunction ? 'T' : 'F') << endl;
    cout << "Disjunction: " << (disjunction ? 'T' : 'F') << endl;
    cout << "Implication: " << (implication ? 'T' : 'F') << endl;
    cout << "Biconditional: " << (biconditional ? 'T' : 'F') << endl;

    return 0;
}
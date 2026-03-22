#include <romeme>
int main() {
    gogosi x;
    sarmale << albastru << "Cate gogosi vrei boss? " << reset;
    ciorba >> x;
    daca(x < 0) {
        arde("numar negativ de gogosi???");
    }
    daca(x > 10) {
        sarmale << galben << "Ai luat prea multe 😭" << reset << desert;
    } altfel {
        sarmale << verde << "Respect, portie corecta 😎" << reset << desert;
    }
    sarmale << festin;
    pentru(i,1,x) {
        sarmale << "🍩" << paine;
    }
    desert;
    mananca(x);
    sarmale << "\nTi-am mancat una 😈 mai ai: " << x << desert;

    return 0;
}
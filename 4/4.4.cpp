#include <iostream>

using namespace std;

int main() {
    for (int lines_with_stars = 1; lines_with_stars < 13; lines_with_stars ++) {
        if (lines_with_stars % 2)
            for (int stars = 0; stars < 8; stars++) cout << "* ";
        else
            for (int spaces = 0; spaces < 8; spaces++) cout << "  ";
        if (lines_with_stars == 1 or lines_with_stars == 4 or lines_with_stars == 8 or lines_with_stars == 11)
            for (int stars = 0; stars < 12; stars++) cout << "- ";
        if (lines_with_stars != 12) cout << endl;
    }

    for (int lines_wo_stars = 0; lines_wo_stars < 6; lines_wo_stars++) {
        if (lines_wo_stars % 2)
            for (int dashes = 0; dashes < 20; dashes++) cout << "- ";
        if (lines_wo_stars != 5) cout << endl;
    }
}
//сдан
#include <iostream>
using namespace std;

class Movie {
    private:
        string rating;

    public:
        string title;
        string director;
        Movie(string aTitle, string aDirector, string aRating) {
            title = aTitle;
            director = aDirector;
            setRating(rating);
        }


        void setRating(string aRating) {

            string ratings[] = {"G", "PG", "PG-13", "R", "NR"};
            for (int i = 0; i < 5; i++) {
                if (ratings[i] == aRating) {
                    rating = aRating;
                    cout << "Valid rating" << endl;
                } else {
                    rating = "NR";
                }
            }            
        }

        string getRating() {
            return rating;
        }
};

int main() {

    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    avengers.setRating("NR");

    cout << avengers.getRating();

    return 0;
}
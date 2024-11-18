#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class LibraryResource{
protected:
    string title;
    string author;
    float price;

public:
    LibraryResource(){
        title = "Not specified";
        author = "Not specified";
        price = 0;
    }

    virtual void resourceDetails(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
    }

    float getPrice(){
        return price;
    }
};

enum CoverType{
    Hardcover,
    Paperback
};

class Book: public LibraryResource{
private:
    CoverType ct;

public:
    Book(string _title, string _author, float _price, CoverType _ct){
        title = _title;
        author = _author;
        price = _price;
        ct = _ct;
    }

    void resourceDetails(){
        LibraryResource::resourceDetails();

        if(ct == 0)
            cout<<"Cover Type: Hardcover"<<endl;
        else
            cout<<"Cover Type: Paperback"<<endl;

        cout<<endl;
    }
};

class EBook: public LibraryResource{
private:
    int mb;

public:
    EBook(string _title, string _author, float _price, int _mb){
        title = _title;
        author = _author;
        price = _price;
        mb = _mb;
    }

    void resourceDetails(){
        LibraryResource::resourceDetails();
        cout<<"Memory: "<<mb<<" MB"<<endl;
        cout<<endl;
    }
};

class Audiobook: public LibraryResource{
private:
    int duration;

public:
    Audiobook(string _title, string _author, float _price, int _duration){
        title = _title;
        author = _author;
        price = _price;
        duration = _duration;
    }

    void resourceDetails(){
        LibraryResource::resourceDetails();
        cout<<"Duration: "<<duration<<" minutes"<<endl;
        cout<<endl;
    }
};

bool compare(LibraryResource* list1, LibraryResource* list2){
    if(list1->getPrice() > list2->getPrice())
        return false;
    return true;
}

void sort_resources_price(LibraryResource** list, int n){
    sort(list, list+n, compare);
}

int main(){
    LibraryResource* resource_list[100];

    /** TASK 1:
        So that the following lines execute without errors
    */
    resource_list[0] = new Book("The Alchemist", "Paulo Coelho", 500, CoverType::Hardcover);
    resource_list[1] = new EBook("1984", "George Orwell", 300, 2.5);
    resource_list[2] = new Audiobook("Becoming", "Michelle Obama", 700, 120);

    /** TASK 2: Display details */
    for (int i = 0; i < 3; i++){
        resource_list[i]->resourceDetails();
    }

    /** TASK 3: Setting ISBN for Book */
    // resource_list[0]->set_no_of_copies(50);
    // resource_list[1]->set_no_of_copies(5);
    // resource_list[2]->set_no_of_copies(1);

    // for (int i = 0; i < 3; i++) {
    //     resource_list[i]->resourceDetails();
    // }


    /** TASK 4: Sorting resources by price 
    Created 7 more objects.*/

    resource_list[3] = new Book("Sapiens", "Yuval Noah Harari", 1000, CoverType::Paperback);
    resource_list[4] = new EBook("Digital Minimalism", "Cal Newport", 400, 3.2);
    resource_list[5] = new Audiobook("Atomic Habits", "James Clear", 1200, 180);
    resource_list[6] = new Book("Dune", "Frank Herbert", 800, CoverType::Hardcover);
    resource_list[7] = new EBook("The Subtle Art of Not Giving a F*ck", "Mark Manson", 350, 1.8);
    resource_list[8] = new Audiobook("Educated", "Tara Westover", 600, 150);
    resource_list[9] = new Book("Harry Potter and the Philosopher's Stone", "J.K. Rowling", 450, CoverType::Paperback);


    sort_resources_price(resource_list, 10);

    /** Display sorted resources */
    for (int i = 0; i < 10; i++) {
        resource_list[i]->resourceDetails();
    }

    return 0;
}


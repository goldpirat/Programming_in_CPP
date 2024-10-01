/*
CH-230-A
a11 p4.h
Flori Kusari
fkusari@jacobs-university.de
*/

// Define the Creature class
class Creature {
    public:
        Creature();  
        void run() const;
        ~Creature();
 
    protected:
        int distance;
};

// Define the Wizard class, which inherits from Creature
class Wizard : public Creature {
    public:
        Wizard();
        void levatate() const;
        ~Wizard();
 
    private:
        int distFactor;
};

// Define the Magicarp class, which inherits from Creature
class Magicarp : public Creature {
    public:
        Magicarp();
        void swim() const;
        ~Magicarp();
 
    private:
        int HeightFactor;
};

// Define the Dwarf class, which inherits from Creature
class Dwarf : public Creature {
    public:
        Dwarf();
        void mine() const;
        ~Dwarf();
 
    private:
        int DepthFactor;
};

/*
CH-230-A
a11 p6.h
Flori Kusari
fkusari@jacobs-university.de
*/

class Vector{
	private:
		int size;
		double *ptr;
	public:
		// Constructors and Destructor
		Vector();
		Vector(int, double*);
		Vector(const Vector&);
		~Vector();
		
		// Setters
		void setSize(int);
		void setMemory(double*);
		
		// Getters
		int getSize();
		double* getMemory();
		
		// Member functions
		void print();
		double norm();
		Vector add(const Vector) const;
		Vector sub(const Vector) const;
		double mult(const Vector) const;
};
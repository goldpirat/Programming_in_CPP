/*
CH-230-A
a11 p1.h
Flori Kusari
fkusari@jacobs-university.de
*/

// Declaration of the Box class
class Box{
	private:
		double height;
		double width;
		double depth;
	public:
    // Constructors and destructor
		Box();
		Box(double, double, double);
		Box(const Box &);
		~Box();
		
        // Setter and Getter methods
		void setWidth(double);
		void setHeight(double);
		void setDepth(double);

		double getWidth();
    	double getHeight();
    	double getDepth();
		
        // Caluculate Volume
		double Volume();
};
namespace figure 
{
	class Figure
	{
	public:
		void setParameters(int, int);
		void setP(int);
		void setS(int);

		void getParameters(void) const;
		int getA(void) const;
		int getB(void) const;
		int getP(void) const;
		int getS(void) const;

	private:
		int a;
		int b;
		int P;
		int S;
	};
}

namespace point
{
	class Point
	{
	public:
		Point(int coordinateX = 0, int coordinateY = 0)
		{
			x = coordinateX;
			y = coordinateY;
		}
		int getX() const;
		int getY() const;
	private:
		int x;
		int y;
	};
}

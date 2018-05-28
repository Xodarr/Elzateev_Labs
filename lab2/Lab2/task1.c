_Bool isInArea(double x, double y) {
	if (pow(x, 2) + pow(y, 2) <= 1 && x <= 1 )
		return isInArea;
	else if (y <= 1 && y >= -1 && x >= -1 && x < 0)
		return isInArea;
	else
		return 0;
}

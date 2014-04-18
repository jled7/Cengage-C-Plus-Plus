void averageAndGrade(int testScore, int progScore,
						double& average, char& grade)
{
	average = (testScore + progScore) / 2.0;

	if (average >= 90.00)
		grade = 'A';
	else if (grade >= 80.00)
		grade = 'B';
	else if (grade >= 70.00)
		grade = 'C';
	else if (grade >= 60.00)
		grade = 'D';
	else
		grade = 'F';
}

import 'dart:math';

void main() {
  List allStudents = [
    "Frenny",
    "Aarchi",
    "Purva",
    "Manali",
    "Krish",
    "Dhruvan",
    "Tanishq",
    "Nishish",
  ];

  Random r = Random();

  print("Selected Student: ${allStudents[r.nextInt(allStudents.length)]}");
}

name = input("Name: ")
lab_grade = float(input("Lab: "))
midterm_grade = float(input("Midterm: "))
final_grade = float(input("Final: "))


last_score = (lab_grade * 0.25) + (midterm_grade * 0.35) + (final_grade * 0.4)

print("Name: " + name)
print("Lab: " + str(lab_grade))
print("Midterm: " + str(midterm_grade))
print("Final: " + str(final_grade))
print("Last Score: " + str(last_score))
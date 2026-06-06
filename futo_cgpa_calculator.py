import sys

def get_classification(cgpa):
    """Returns the FUTO degree classification based on CGPA."""
    if cgpa >= 4.50:
        return "First Class Honours"
    elif cgpa >= 3.50:
        return "Second Class Honours (Upper Division)"
    elif cgpa >= 2.40:
        return "Second Class Honours (Lower Division)"
    elif cgpa >= 1.50:
        return "Third Class"
    elif cgpa >= 1.00:
        return "Pass"
    else:
        return "Fail"

def main():
    print("========================================")
    print("   FUTO STYLE CGPA CALCULATOR (5.0)")
    print("========================================\n")
    print("This tool calculates your CGPA based on your")
    print("semester GPA and total credit units.\n")

    try:
        num_semesters = int(input("How many semesters have you completed? "))
    except ValueError:
        print("Invalid input. Please enter a number.")
        return

    cumulative_quality_points = 0
    cumulative_credit_units = 0

    for sem in range(1, num_semesters + 1):
        print(f"\n>>> SEMESTER {sem}")
        while True:
            try:
                gpa = float(input(f"  Enter GPA for Semester {sem}: "))
                units = int(input(f"  Enter Total Credit Units for Semester {sem}: "))
                
                if gpa < 0 or gpa > 5.0:
                    print("  Error: GPA must be between 0.0 and 5.0.")
                    continue
                
                # Quality Points = GPA * Units
                quality_points = gpa * units
                
                cumulative_quality_points += quality_points
                cumulative_credit_units += units
                break
            except ValueError:
                print("  Invalid input. Please enter numeric values.")

    if cumulative_credit_units > 0:
        cgpa = cumulative_quality_points / cumulative_credit_units
        print("\n" + "="*40)
        print(f"FINAL ACADEMIC SUMMARY")
        print(f"Total Credit Units: {cumulative_credit_units}")
        print(f"Total Quality Points: {cumulative_quality_points:.2f}")
        print(f"CUMULATIVE GPA (CGPA): {cgpa:.2f}")
        print(f"Classification: {get_classification(cgpa)}")
        print("="*40)
    else:
        print("\nNo data entered to calculate CGPA.")

if __name__ == "__main__":
    main()


lloyd ={
        "name":"lloyd",
         "homework":[90.0,97.0,75.0,92.0],
         "quizzes":[88.0,40.0,94.0],
         "tests":[75.0,90.0]
    }

alice = {
        "name":"alice",
        "homework":[100.0,98.0,92.0,100.0],
        "quizzes":[99.0, 88.2, 90.0],
        "tests":[75.0,88.0]
       }

tyler = {"name":"tyler",
         "homework":[99.0,94.5,100.0,89.9],
         "quizzes":[99.0,88.9,45.0],
         "tests":[89.0,55.0]

        }


def average(numbers):
    total = sum(numbers)
    total /= len(numbers)
    return total 


def get_Average(students):
    homework = average(students["homework"])
    quizzes  = average(students["quizzes"])
    tests    = average(students["tests"])
    return homework * 0.1 + quizzes * 0.3 + tests * 0.6


def get_letter_grade(score):
    if score >= 90:
        return "A"
    elif score >=80:
        return "B"
    elif score >= 70:
        return "C"
    elif score >= 60:
        return "D"
    else:
        return "F"

def get_class_average(class_list):
    result = []
    for student in class_list:
        student_ave = get_Average(student)
        result.append(student_ave)
    return average(result)

students = [lloyd,alice,tyler]

print (get_class_average(students))
    



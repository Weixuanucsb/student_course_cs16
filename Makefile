remove_student_id_tests: remove_student.o remove_student_id_tests.o 
	g++ $^ -o $@

reverse_course_list_tests: reverse_course_list.o reverse_course_list_tests.o
	g++ $^ -o $@

edit_student_name_tests: edit_student_name.o edit_student_name_tests.o
	g++ $^ -o $@

remove_student_id_tests: remove_student.o remove_student_id_tests.o
	g++ $^ -o $@

clean:
	rm *.o reverse_course_list_tests edit_student_name_tests  

-- Create the database
CREATE DATABASE IF NOT EXISTS School_Db;
-- Set School_Db as main schema
 use School_db;
 -- Create teachers table
 create table teachers (
	teacher_id int primary key auto_increment not null,
    teacher_first_name varchar(50),
    teacher_last_name varchar(50),
    teacher_subject varchar(50),
    teacher_phone_num varchar(15)
 );
 -- Inserting data 
insert into teachers (teacher_first_name, teacher_last_name, teacher_subject, teacher_phone_num)
values 
    ('John', 'Doe', 'Math', '123-456-7890'),
    ('Jane', 'Smith', 'Science', '987-654-3210'),
    ('Michael', 'Johnson', 'English', '555-123-4567'),
    ('Emily', 'Davis', 'History', '555-987-6543'),
    ('David', 'Martinez', 'Physical Education', '555-246-8109'),
    ('Sarah', 'Anderson', 'Art', '555-321-4321'),
    ('Chris', 'Brown', 'Music', '555-654-9876'),
    ('Jessica', 'Miller', 'Computer Science', '555-789-6543'),
    ('Matthew', 'Wilson', 'Geography', '555-135-7912'),
    ('Laura', 'Taylor', 'Literature', '555-246-9135');
-- Making sure the table is working as needed
select * from teachers;
-- Create students table
create table students (
	student_id int primary key auto_increment not null,
    student_first_name varchar(50),
    student_last_name varchar(50),
    student_gpa decimal(2, 1) default 0,
    student_advisor_id int,
    foreign key (student_advisor_id) references teachers(teacher_id)
);

insert into students (student_first_name, student_last_name, student_gpa, student_advisor_id)
values ("Zeoy", "Mark", 1.2, 6),
	   ("Lily", "kisscat", 4, 3);
 
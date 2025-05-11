<?php
$conn = new mysqli("localhost", "root", "", "student_db");
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$name = $_POST['name'];
$roll = $_POST['roll'];
$sub1 = $_POST['sub1'];
$sub2 = $_POST['sub2'];
$sub3 = $_POST['sub3'];

$sql = "INSERT INTO students (name, roll, subject1, subject2, subject3)
        VALUES ('$name', '$roll', $sub1, $sub2, $sub3)";

if ($conn->query($sql) === TRUE) {
    echo "Data saved successfully. <a href='result.php?roll=$roll'>View Result</a>";
} else {
    echo "Error: " . $conn->error;
}

$conn->close();
?>

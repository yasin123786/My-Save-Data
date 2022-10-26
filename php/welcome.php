<!-- Your Name:  <?php  echo $_POST["name"]; ?><br><br>
Your Email:  <?php  echo $_POST["email"]; ?><br><br> -->



<?php
echo "<pre>";
print_r($_REQUEST);
echo $_REQUEST['name'];
echo $_REQUEST['email']; 
?>
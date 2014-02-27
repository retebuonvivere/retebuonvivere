&lt;?php<br />         
         $to = &quot;miro.marchi@gmail.com&quot;; // REPLACE<br />
         $subject = &quot;Test mail&quot;;<br />
         $message = &quot;Hello! This is a simple email message.&quot;;<br />
         $from = &quot;info@retebuonvivere.org&quot;;<br />
         $headers = &quot;From:&quot; . $from;<br />
         mail($to,$subject,$message,$headers);<br />
         echo &quot;Mail Sent.&quot;;

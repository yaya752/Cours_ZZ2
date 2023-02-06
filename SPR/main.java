import java.io.DataOutputStream;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.URLEncoder;
import java.nio.charset.StandardCharsets;

public class main{
    public static void main(String[] args) throws Exception {
      URL url = new URL("http://localhost/formulaire.php");
      HttpURLConnection con = (HttpURLConnection) url.openConnection();
      con.setRequestMethod("POST");
      con.setDoOutput(true);


      // Write form data to the request body
      try (DataOutputStream out = new DataOutputStream(con.getOutputStream())) {
          out.writeBytes("nom=" + URLEncoder.encode("khiara", StandardCharsets.UTF_8));
          out.writeBytes("&prenom=" + URLEncoder.encode("yass", StandardCharsets.UTF_8));
          out.flush();    
      }

      // Read the response
      try (InputStreamReader in = new InputStreamReader(con.getInputStream())) {
          int c;
          while ((c = in.read()) != -1) {
              System.out.print((char) c);
          }
      }
  }
}
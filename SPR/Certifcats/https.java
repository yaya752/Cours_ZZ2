import java.io.DataOutputStream;
import java.io.InputStreamReader;
import java.net.*;
import java.nio.charset.StandardCharsets;

public class https{
    public static void main(String[] args) throws Exception {
      URL url = new URL("https", "www.yass.fr",443,"/");
      System.out.println("content :" +url.getContent().toString());
  }
}
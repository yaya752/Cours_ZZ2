package com.modernarchi.tp2.kafka;

public class PixelLine {

    public PixelLine() {
    }

    public PixelLine(String datetime, String user, String color, Integer pixelX, Integer pixelY) {
        this.datetime = datetime;
        this.user = user;
        this.color = color;
        this.pixelX = pixelX;
        this.pixelY = pixelY;
    }

    public String datetime;

    public String user;

    public String color;
    public Integer pixelX;

    public Integer pixelY;

    public static PixelLine fromLine(String l) {
        String[] split = l.split(",");
        String datetime = split[0];
        String user = split[1];
        String color = split[2];
        String pixelXString = split[3].replaceAll("\"", "");
        String pixelYString = split[4].replaceAll("\"", "");
        Integer pixelX = Integer.parseInt(pixelXString);
        Integer pixelY = Integer.parseInt(pixelYString);
        return new PixelLine(datetime, user, color, pixelX, pixelY);
    }

    @Override
    public String toString() {
        return "PixelLine{" +
                "datetime='" + datetime + '\'' +
                ", user='" + user + '\'' +
                ", color='" + color + '\'' +
                ", pixelX=" + pixelX +
                ", pixelY=" + pixelY +
                '}';
    }
}

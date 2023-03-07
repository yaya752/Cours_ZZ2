package com.modernarchi.tp2.kafka;

import com.fasterxml.jackson.core.JsonProcessingException;
import com.fasterxml.jackson.databind.ObjectMapper;
import com.modernarchi.tp2.model.Pixel;
import com.modernarchi.tp2.store.PixelStore;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.kafka.annotation.KafkaListener;
import org.springframework.stereotype.Component;

import java.io.IOException;

@Component
public class PixelConsumer {

    @Autowired
    private PixelStore pixelStoreStore;

    @KafkaListener(id= "consumer", topics = "pixels")
    public void listenGroupFoo(String message) throws IOException {
        ObjectMapper objectMapper = new ObjectMapper();
        PixelLine line = objectMapper.reader().readValue(message, PixelLine.class);

        Pixel pixel = new Pixel(line.color);
        pixelStoreStore.addPixel(line.pixelX, line.pixelY, pixel);
    }

}

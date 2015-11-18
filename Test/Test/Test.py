import cocos


class HelloWorld(cocos.layer.Layer):

    def __init__(self):
        super(HelloWorld, self).__init__()

        #label = cocos.text.Label('Hello, World!',
        #                         font_name='Gothic',
        #                         font_size=32,
        #                         anchor_x='center', anchor_y='center')

        #label.position = 320, 240

        
        #self.add(label)
        

if __name__ == "__main__":
    
    cocos.director.director.init()

    
    hello_layer = HelloWorld()

    
    main_scene = cocos.scene.Scene(hello_layer)

    spr1 = cocos.sprite.Sprite('bit1.png')
    spr1.position = 320,240
    hello_layer.add(spr1)


    
    cocos.director.director.run(main_scene)

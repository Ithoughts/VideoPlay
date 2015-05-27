

#import <Foundation/Foundation.h>


@interface Texture : NSObject {
@private
    int channels;
}

// --- Properties ---
@property (nonatomic, readonly) int width;
@property (nonatomic, readonly) int height;
@property (nonatomic, readwrite) int textureID;
@property (nonatomic, readonly) unsigned char *pngData;

// --- Public methods ---
- (id)initWithImageFile:(NSString*)filename;

@end

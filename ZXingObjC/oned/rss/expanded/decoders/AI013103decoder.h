#import "BitArray.h"

/**
 * @author Pablo Orduña, University of Deusto (pablo.orduna@deusto.es)
 */

@interface AI013103decoder : AI013x0xDecoder {
}

- (id) initWithInformation:(BitArray *)information;
- (void) addWeightCode:(StringBuffer *)buf weight:(int)weight;
- (int) checkWeight:(int)weight;
@end
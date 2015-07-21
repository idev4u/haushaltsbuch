//
//  Coasts+CoreDataProperties.h
//  haushaltsbuch
//
//  Created by Norman Sutorius on 21.07.15.
//  Copyright © 2015 Norman Sutorius. All rights reserved.
//
//  Delete this file and regenerate it using "Create NSManagedObject Subclass…"
//  to keep your implementation up to date with your model.
//

#import "Coasts.h"

NS_ASSUME_NONNULL_BEGIN

@interface Coasts (CoreDataProperties)

@property (nullable, nonatomic, retain) NSDate *dataOfAdding;
@property (nullable, nonatomic, retain) NSString *note;
@property (nullable, nonatomic, retain) NSString *position;
@property (nullable, nonatomic, retain) NSNumber *price;

@end

NS_ASSUME_NONNULL_END

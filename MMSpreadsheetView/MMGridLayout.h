// Copyright (c) 2013 Mutual Mobile (http://mutualmobile.com/)
// Copyright (c) 2015 David Hoerl
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <UIKit/UIKit.h>


/**
 `MMGridLayout` provides the grid layout of cells for the spreadsheet.
 
 Code for the layout was inspired by https://github.com/mattlangtree/grid-view-csv
 */

@interface MMGridLayout : UICollectionViewLayout

/**
 A string identifier.
 
 */
@property (nonatomic, strong) NSString *name;

///---------------------------------------
/// @name Accessing Layout Properties
///---------------------------------------

/**
 Efficeincy mode for layout sizes.
 
 @discussion Normally leave alone, but you need to reset it to NO when the column sizes change (spreadsheet.invalidate)
 */
@property (nonatomic, assign) BOOL isInitialized;

/**
 The space between cells.
 
 @discussion This allows for setting the spacing between cells. Lines are not drawn, but show the background of the collection view. The layout is invalidated when the cellSpacing is changed. Default is 1.
 */
@property (nonatomic, assign) CGFloat cellSpacing;


- (CGPoint)snapToGrid:(CGPoint)startingPoint;

@end
